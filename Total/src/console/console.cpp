#include "../pch.h"

void Console::Alloc( ) {
#ifndef DISABLE_LOGGING_CONSOLE
	AllocConsole( );
    FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
	//freopen_s(&Dummy, "CONIN$", "r", stdin);
    SetConsoleTitleA("Total - Console");

	
	//::ShowWindow(GetConsoleWindow( ), SW_SHOW);
#endif
}

void Console::Free( ) {
#ifndef DISABLE_LOGGING_CONSOLE
    //fclose(stdin);
    //fclose(stdout);
   // FreeConsole( );
    //PostMessage(GetConsoleWindow(), WM_CLOSE, 0, 0);
    ::ShowWindow(GetConsoleWindow( ), SW_HIDE);
    FreeConsole( );
    //fclose(stdin);
	//fclose(stdout);

	//if (H::bShuttingDown) {
	//	::ShowWindow(GetConsoleWindow( ), SW_HIDE);
	//} else {
	//	FreeConsole( );
	//}
#endif
}
