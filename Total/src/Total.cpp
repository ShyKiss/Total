#include "PCH/PCH.h"

DWORD WINAPI OnProcessAttach(LPVOID lpParam);
DWORD WINAPI OnProcessDetach(LPVOID lpParam);

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved) {
    if (fdwReason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hinstDLL);
       
        HINSTANCE hD3D12 = GetModuleHandle(TEXT("D3D12.DLL"));
        if (hD3D12) {
            Utils::SetRenderingBackend(DIRECTX12);
            H::IsD3D12 = true;
        }
        else Utils::SetRenderingBackend(DIRECTX11);

        Utils::TotalInstance = hinstDLL;

        HANDLE hHandle = CreateThread(NULL, 0, OnProcessAttach, hinstDLL, 0, NULL);
        if (hHandle != NULL) {
            CloseHandle(hHandle);
        }
    } else if (fdwReason == DLL_PROCESS_DETACH && !lpReserved) {
        OnProcessDetach(NULL);
    }

    return TRUE;
}

DWORD WINAPI OnProcessAttach(LPVOID lpParam) {
    Console::Alloc( );

    Utils::mainWindow = (HWND)FindWindow(0, "The Outlast Trials  ");
    SetFocus(Utils::mainWindow);
    SetForegroundWindow(Utils::mainWindow);
    

    LOG("Rendering backend: %s\n", Utils::RenderingBackendToStr( ));
    if (Utils::GetRenderingBackend( ) == NONE) {
        FreeLibraryAndExitThread(reinterpret_cast<HMODULE>(lpParam), 0);
        return 0;
    }

    MH_Initialize( );
    H::Init( );

    return 0;
}

DWORD WINAPI OnProcessDetach(LPVOID lpParam) {
    H::Free( );
    MH_Uninitialize( );

    Console::Free( );

    return 0;
}
