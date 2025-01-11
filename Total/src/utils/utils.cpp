#include "../PCH/PCH.h"

#define RB2STR(x) case x: return #x

EXTERN_C IMAGE_DOS_HEADER __ImageBase;

static RenderingBackend_t g_eRenderingBackend = NONE;

static BOOL CALLBACK EnumWindowsCallback(HWND handle, LPARAM lParam) {
	const auto isMainWindow = [ handle ]( ) {
		return GetWindow(handle, GW_OWNER) == nullptr && IsWindowVisible(handle);
	};

	DWORD pID = 0;
	GetWindowThreadProcessId(handle, &pID);

	if (GetCurrentProcessId( ) != pID || !isMainWindow( ) || handle == GetConsoleWindow( ))
		return TRUE;

	*reinterpret_cast<HWND*>(lParam) = handle;

	return FALSE;
}

static DWORD WINAPI _UnloadDLL(LPVOID lpParam) {
	FreeLibraryAndExitThread(Utils::GetCurrentImageBase( ), 0);
	return 0;
}

namespace Utils {
	void SetRenderingBackend(RenderingBackend_t eRenderingBackground) {
		g_eRenderingBackend = eRenderingBackground;
	}

	RenderingBackend_t GetRenderingBackend( ) {
		return g_eRenderingBackend;
	}

	const char* RenderingBackendToStr( ) {
		RenderingBackend_t eRenderingBackend = GetRenderingBackend( );
		switch (eRenderingBackend) {
			RB2STR(DIRECTX11);
			RB2STR(DIRECTX12);
		}

		return "NONE/UNKNOWN";
	}

	HWND GetProcessWindow( ) {
		return (HWND)FindWindow(0, "\x0054\x0068\x0065\x0020\x004f\x0075\x0074\x006c\x0061\x0073\x0074\x0020\x0054\x0072\x0069\x0061\x006c\x0073\x0020\x0020");
	}

	void UnloadDLL( ) {
        Console::Free();
        PostMessage(GetConsoleWindow( ), WM_CLOSE, 0, 0);
		HANDLE hThread = CreateThread(NULL, 0, _UnloadDLL, NULL, 0, NULL);
		if (hThread != NULL) CloseHandle(hThread);
	}

	HMODULE GetCurrentImageBase( ) {
		return (HINSTANCE)(&__ImageBase);
	}

	int GetCorrectDXGIFormat(int eCurrentFormat) {
		switch (eCurrentFormat) {
			case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB: return DXGI_FORMAT_R8G8B8A8_UNORM;
		}

		return eCurrentFormat;
	}
}
