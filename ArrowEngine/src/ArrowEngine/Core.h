#pragma once

#ifdef  AE_PLATFORM_WINDOWS
	#ifdef AE_BUILD_DLL
		#define AE_API __declspec(dllexport)
	#else
		#define AE_API __declspec(dllimport)
	#endif // DEBUG
#else
	//#error Platform not support!s
#endif //  AE_PLATFORM_WINDOWS
