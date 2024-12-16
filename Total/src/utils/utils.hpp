#pragma once
#include "../PCH/PCH.h"

#define GET_VARIABLE_NAME(Variable) (#Variable)
#define MACRO_VARIABLE_TO_STRING(Variable) (void(Variable),#Variable)

enum RenderingBackend_t {
	NONE = 0,

	DIRECTX11,
	DIRECTX12,
};

namespace Utils {

	inline HWND mainWindow = nullptr;
	inline HINSTANCE TotalInstance;
	inline bool TexturesLoaded = false;

	void SetRenderingBackend(RenderingBackend_t eRenderingBackend);
	RenderingBackend_t GetRenderingBackend( );
	const char* RenderingBackendToStr( );

	HWND GetProcessWindow( );
	void UnloadDLL( );
	
	HMODULE GetCurrentImageBase( );

	int GetCorrectDXGIFormat(int eCurrentFormat);
}
