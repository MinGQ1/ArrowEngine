#pragma once
#include "Core.h"

namespace ArrowEngine {

	class AE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}


