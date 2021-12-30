#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace ArrowEngine {

	class AE_API Log
	{
	public:
		static void Init();
		
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core Log
#define AE_CORE_TRACE(...) ::ArrowEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define AE_CORE_INFO(...) ::ArrowEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define AE_CORE_WARN(...) ::ArrowEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define AE_CORE_ERROR(...) ::ArrowEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define AE_CORE_FATAL(...) ::ArrowEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// App log
#define AE_TRACE(...) ::ArrowEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define AE_INFO(...) ::ArrowEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define AE_WARN(...) ::ArrowEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define AE_ERROR(...) ::ArrowEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define AE_FATAL(...) ::ArrowEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
