#pragma once

#include <cstddef>
#include "EventCommon.h"

namespace ArrowEngine {
	class EventMessage
	{
	public:
		EventMessage(int id): m_EventID(id)
		{
		}
		EventID GetEventID() const { return m_EventID; };
	protected:
		const EventID m_EventID;
		std::byte m_Message;
	};
}