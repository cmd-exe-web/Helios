#pragma once

#include "Core.h"

namespace Helios {

	class HELIOS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
