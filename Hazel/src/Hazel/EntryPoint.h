#pragma once
#include <stdio.h>

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** agrv) {

	printf("HAZEL ENGINE");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}


#else 
	#error Hazel apenas suporta Windows!
#endif