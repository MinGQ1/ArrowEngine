#pragma once

#include "ArrowPlatform.h"
#include "ArrowEngine/Events/EventManager.h"

namespace ArrowEngine {
	class WindowEventManager: public EeventManager
	{
	};

	class Window
	{
	public:
		Window(UInt32 width, UInt32 height);
		virtual ~Window();

		virtual UInt32 GetWidth();
		virtual UInt32 GetHeight();
		virtual void SetEventCallback();
	protected:
		UInt32 m_Width;
		UInt32 m_Height;
		WindowEventManager* m_EventMgr;
	};
}
