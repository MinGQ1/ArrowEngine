#pragma once

#include "ArrowPlatform.h"

namespace ArrowEngine {
	class Window
	{
	public:
		static Window Create();

		virtual Window(UInt32 width, UInt32 height);
		virtual ~Window() = default;

		virtual UInt32 GetWidth() = 0;
		virtual UInt32 GetHeight() = 0;
	};
}
