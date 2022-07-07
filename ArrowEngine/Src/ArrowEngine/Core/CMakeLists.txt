add_library(ArrowEngine SHARED
Application.cpp
Log.cpp
 "Window.h" "ArrowPlatform.h")

IF(WIN32)
	target_compile_definitions(ArrowEngine PRIVATE 
	AE_BUILD_DLL
	)
ENDIF(WIN32)