#pragma once

#ifdef  AE_PLATFORM_WINDOWS

extern ArrowEngine::Application* ArrowEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = ArrowEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif //  AE_PLATFORM_WINDOWS
