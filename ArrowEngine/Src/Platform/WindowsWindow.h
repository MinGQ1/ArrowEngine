#pragma once

#include "ArrowEngine/Core/Window.h"

namespace ArrowEngine {
	class WindowsWindow : public Window
	{
	public:
		WindowsWindow(UInt32 width, UInt32 height);
		virtual ~WindowsWindow();

		virtual UInt32 GetWidth() { return m_Width; }
		virtual UInt32 GetHeight() { return m_Height; }
	private:
		UInt32 m_Height;
		UInt32 m_Width;
	};
}
