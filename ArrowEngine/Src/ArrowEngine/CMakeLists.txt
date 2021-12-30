add_library(ArrowEngine SHARED
Application.cpp
Log.cpp
)

IF(WIN32)
	target_compile_definitions(ArrowEngine PRIVATE 
	AE_BUILD_DLL
	)
ENDIF(WIN32)