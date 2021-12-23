#pragma once

#ifdef  AE_PLATFORM_WINDOWS

extern ArrowEngine::Application* ArrowEngine::CreateApplication();

int main(int argc, char** argv)
{
	ArrowEngine::Log::Init();
	AE_CORE_WARN("Hello Log!");
	auto app = ArrowEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif //  AE_PLATFORM_WINDOWS
