#pragma once
#include "ArrowEngine/Events/EventManager.h"

namespace ArrowEngine {

	class WindowsWindowEventListener : EventListener
	{
	public:
		void Handle() override;
	private:
		
	};

	class WindowsWindowEventMananger: EeventManager
	{
	public:
		void Subscribe(EventID eventID, EventListener listener) override;
		void Unsubscribe(EventID eventID, EventListener listener) override;

		template<typename T>
		void Notify(T& message) override;
	};
}