#pragma once
#include "../pch.h"

#ifndef DISABLE_LOGGING_CONSOLE
#define LOG(...) printf(__VA_ARGS__)
#else
#define LOG(...)
#endif

namespace Console {
	void Alloc( );
	void Free( );
}
