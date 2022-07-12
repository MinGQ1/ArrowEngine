#pragma once
#include<ArrowEngine/Core/Core.h>

namespace ArrowEngine {

	class EventListener
	{
	public:
		virtual ~EventListener() = default;

		virtual void Handle() = 0;
	};

	class  EeventManager
	{
	public:
		virtual ~EeventManager() = default;

		virtual void Subscribe(EventID eventID, EventListener listener);
		virtual void Unsubscribe(EventID eventID, EventListener listener);
		virtual void NotifyWithMessage(EventID eventID);
	};
}