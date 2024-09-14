#include <conio.h>
#include <shlwapi.h>
#include <stdio.h>
#include <tlhelp32.h>
#include "resource.h"
#include <fstream>
#include <random>
using namespace std;

#define _CRT_SECURE_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#define CREATE_THREAD_ACCESS (PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_OPERATION | PROCESS_VM_WRITE | PROCESS_VM_READ)

BOOL Inject(DWORD pID, const char* DLL_NAME);
DWORD GetTargetThreadIDFromProcName(const char* ProcName);
string random_string(string::size_type length);

int main(int argc, char* argv[]) {
    DWORD pID = GetTargetThreadIDFromProcName("TOTClient-Win64-Shipping.exe");
    char path[MAX_PATH] = {0};
    char pathtemp[MAX_PATH] = {0};
    char name_of_dll[64] = "Total-x64.dll";

    HRSRC hResource = FindResource(NULL, MAKEINTRESOURCE(IDR_DLL1), "DLL");
    HGLOBAL hGlobal = LoadResource(NULL, hResource);
    DWORD dllSize = SizeofResource(NULL, hResource);
    void* dllBuffer = LockResource(hGlobal);

    char tempPath[MAX_PATH] = { };
    if (!GetTempPathA(MAX_PATH, pathtemp))
        return 5;

    string fullPath = string(tempPath) + name_of_dll;

    ofstream outfile(fullPath.c_str( ), ios::binary);
    if (!outfile.is_open( ))
        return 6;

    int res = (outfile.write((char*)dllBuffer, dllSize)) ? 0 : 7;
    outfile.close( );

    GetFullPathName(name_of_dll, MAX_PATH, path, NULL);

    DWORD* ptr_pID = &pID;
    if (*ptr_pID == NULL) {
        ShellExecuteW(NULL, L"open", L"steam://rungameid/1304930", 0, 0, SW_HIDE);
        puts("\nWaiting for the game");
        do {
            pID = GetTargetThreadIDFromProcName("TOTClient-Win64-Shipping.exe");
            putchar('.');
            Sleep(5000);
        } while (*ptr_pID == NULL);
    }

    if (!Inject(pID, path)) {
        puts("Not Loaded!");
    } else {
        puts("Loaded!");
    }
}

BOOL Inject(DWORD pID, const char* DLL_NAME) {
    HANDLE Proc;
    HMODULE hLib;
    char buf[50] = {0};
    LPVOID RemoteString, LoadLibraryEx;

    if (!pID)
        return false;

    Proc = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pID);
    if (!Proc) {
        return false;
    }

    LoadLibraryEx = (LPVOID)GetProcAddress(GetModuleHandle("kernel32.dll"), "LoadLibraryA");
    RemoteString = (LPVOID)VirtualAllocEx(Proc, NULL, strlen(DLL_NAME), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

    WriteProcessMemory(Proc, (LPVOID)RemoteString, DLL_NAME, strlen(DLL_NAME), NULL);
    CreateRemoteThread(Proc, NULL, NULL, (LPTHREAD_START_ROUTINE)LoadLibraryEx, (LPVOID)RemoteString, NULL, NULL);

    CloseHandle(Proc);
    return true;
}

DWORD GetTargetThreadIDFromProcName(const char* ProcName) {
    PROCESSENTRY32 pe;
    HANDLE thSnapShot;
    BOOL retval, ProcFound = false;

    thSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (thSnapShot == INVALID_HANDLE_VALUE) {
        return false;
    }

    pe.dwSize = sizeof(PROCESSENTRY32);

    retval = Process32First(thSnapShot, &pe);
    while (retval) {
        if (StrStrI(pe.szExeFile, ProcName)) {
            return pe.th32ProcessID;
        }
        retval = Process32Next(thSnapShot, &pe);
    }
    return 0;
}
