#include "Window.h"

namespace ArrowEngine {
	Window::Window(UInt32 width, UInt32 height): m_Width(width), m_Height(height)
	{
		m_EventMgr = new WindowEventManager();
	}

	Window::~Window()
	{
		delete m_EventMgr;
	}
}