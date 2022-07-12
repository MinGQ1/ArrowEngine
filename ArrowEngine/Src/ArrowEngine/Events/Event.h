#pragma once
#include<ArrowEngine/Core/Core.h>

namespace ArrowEngine {
	enum class EventType
	{
		None = 0,
		KeyPressed,
		KeyRelease,
		KeyTyped,
	};

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

		virtual void Subscribe(int eventID, EventListener listener);
		virtual void Unsubscribe(int eventID, EventListener listener);
	};
}