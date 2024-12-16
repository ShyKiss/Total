#include "../PCH/PCH.h"

static HWND g_hWindow = NULL;
static std::mutex g_mReinitHooksGuard;

static DWORD WINAPI ReinitializeGraphicalHooks(LPVOID lpParam) {
    std::lock_guard<std::mutex> guard{g_mReinitHooksGuard};

    LOG("[!] Hooks will reinitialize!\n");

    HWND hNewWindow = Utils::GetProcessWindow( );
    while (hNewWindow == reinterpret_cast<HWND>(lpParam)) {
        hNewWindow = Utils::GetProcessWindow( );
    }

    H::bShuttingDown = true;

    H::Free( );
    H::Init( );

    H::bShuttingDown = false;

    Utils::TexturesLoaded = false;

    return 0;
}

static WNDPROC oWndProc;
static LRESULT WINAPI WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    if (uMsg == WM_KEYDOWN) {
        if (wParam == VK_OEM_3) {
            Menu::bShowMenu = !Menu::bShowMenu;
            return 0;
        } else if (wParam == VK_HOME) {
            HANDLE hHandle = CreateThread(NULL, 0, ReinitializeGraphicalHooks, NULL, 0, NULL);
            if (hHandle != NULL)
                CloseHandle(hHandle);
            return 0;
        } else if (wParam == VK_DELETE) {
            H::bShuttingDown = true;
            //Console::Free( );
            Utils::UnloadDLL( );
            return 0;
        }
        else if (wParam == VK_OEM_MINUS) {
            Menu::Total_ForceExitToMenu();
        }
    } else if (uMsg == WM_DESTROY) {
        HANDLE hHandle = CreateThread(NULL, 0, ReinitializeGraphicalHooks, hWnd, 0, NULL);
        if (hHandle != NULL)
            CloseHandle(hHandle);
    }

    LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
    if (Menu::bShowMenu) {
        ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);
    }

    return Menu::bShowMenu ? Menu::bShowMenu : CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

namespace Hooks {
    void Init( ) {
        g_hWindow = Utils::GetProcessWindow( );

        Config::ParseConfig();

        RenderingBackend_t eRenderingBackend = Utils::GetRenderingBackend( );
        switch (eRenderingBackend) {
            case DIRECTX11:
                DX11::Hook(g_hWindow);
                break;
            case DIRECTX12:
                DX12::Hook(g_hWindow);
                break;
        }

        oWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(g_hWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(WndProc)));
    }

    void Free( ) {
        if (oWndProc) {
            SetWindowLongPtr(g_hWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(oWndProc));
        }

        MH_DisableHook(MH_ALL_HOOKS);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        ;
        RenderingBackend_t eRenderingBackend = Utils::GetRenderingBackend( );
        switch (eRenderingBackend) {
            case DIRECTX11:
                DX11::Unhook( );
                break;
            case DIRECTX12:
                DX12::Unhook( );
                break;
        }
    }
}
