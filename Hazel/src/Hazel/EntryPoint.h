#pragma once
#include <stdio.h>

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** agrv) {

	Hazel::Log::Init();
	HZ_CORE_WARN("Initialize LOG!!!");
	HZ_CLIENT_INFO("Hello...");



	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}


#else 
	#error Hazel apenas suporta Windows!
#endif