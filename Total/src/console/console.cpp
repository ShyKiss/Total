#include "../pch.h"

void Console::Alloc( ) {
#ifndef DISABLE_LOGGING_CONSOLE
	AllocConsole( );
    FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
    SetConsoleTitleA("Total - Console");
#endif
}

void Console::Free( ) {
#ifndef DISABLE_LOGGING_CONSOLE
    ::ShowWindow(GetConsoleWindow( ), SW_HIDE);
    FreeConsole( );
#endif
}
