#pragma once
#include "../PCH/PCH.h"

#ifndef DISABLE_LOGGING_CONSOLE
#define LOG(...) printf(__VA_ARGS__)
#else
#define LOG(...)
#endif

namespace Console {
	inline bool IsOpened;

	void Alloc( );
	void Free( );
	void Show();
	void Hide();
}
