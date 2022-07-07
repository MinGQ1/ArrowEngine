#pragma once

#include "ArrowPlatform.h"

namespace ArrowEngine {
	class Window
	{
	public:
		~Window() = default;

		virtual UInt32 GetWidth() = 0;
		virtual UInt32 GetHeight() = 0;
	};
}
