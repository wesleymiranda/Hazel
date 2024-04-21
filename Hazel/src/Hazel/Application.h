#pragma once

#include "Core.h"

namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	//Para ser definido no CLIENT
	Application* CreateApplication();


}