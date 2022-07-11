#pragma once
#include<ArrowEngine/Core/Core.h>

namespace ArrowEvent {
	#definde EVENT_ID
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

		virtual void Subscribe(int eventID, ) = 0;
		virtual void Unsubscribe() = 0;
	};
}