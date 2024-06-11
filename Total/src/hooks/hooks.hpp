#pragma once
#include <Windows.h>

namespace Hooks {
	void Init( );
	void Free( );

	inline bool bShuttingDown;
    inline bool IsD3D12 = false;
}

namespace H = Hooks;
