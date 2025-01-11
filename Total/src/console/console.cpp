#include "../PCH/PCH.h"

void Console::Alloc( ) {
#ifndef DISABLE_LOGGING_CONSOLE
    IsOpened = true;
    AllocConsole();
    FILE* Dummy;
    freopen_s(&Dummy, "CONOUT$", "w", stdout);
    SetConsoleTitleA("Total - Console");
#endif
}

void Console::Free( ) {
#ifndef DISABLE_LOGGING_CONSOLE
    IsOpened = false;
    ::ShowWindow(GetConsoleWindow( ), SW_HIDE);
    FreeConsole( );
#endif
}

void Console::Show() {
    IsOpened = true;
    ::ShowWindow(GetConsoleWindow(), SW_SHOW);
}

void Console::Hide() {
    IsOpened = false;
    ::ShowWindow(GetConsoleWindow(), SW_HIDE);
}
