#pragma once

#include <Windows.h>

namespace Menu {
    void InitializeContext(HWND hwnd);
    void Render( );

    inline bool bShowMenu = false;
} // namespace Menu
