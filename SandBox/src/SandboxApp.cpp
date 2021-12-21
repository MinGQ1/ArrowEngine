#include <Arrow.h>

class SandBox : public ArrowEngine::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};

ArrowEngine::Application* ArrowEngine::CreateApplication()
{
	return new SandBox();
}