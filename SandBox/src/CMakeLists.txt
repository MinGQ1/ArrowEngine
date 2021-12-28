add_executable(Application SandboxApp.cpp)

#Project dependencies
add_dependencies(Application ArrowEngine)

target_link_libraries(Application ArrowEngine)