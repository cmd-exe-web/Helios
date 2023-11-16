#include <Helios.h>

class Sandbox : public Helios::Application
{
public:
	Sandbox()
	{

	}
	
	~Sandbox()
	{

	}
};

Helios::Application* Helios::CreateApplication()
{
	return new Sandbox();
}