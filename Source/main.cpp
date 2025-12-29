#include "Window/Window.h"
#include "Renderer/Renderer.h"

int main()
{
	Window* basicWindow = new Window({ 1280, 720 }, "Basic Window"); 
	basicWindow->Initialize(); 

	Renderer* basicRenderer = new Renderer(basicWindow);

	while (basicWindow->IsVisible())
	{
		basicWindow->Run(); 
		basicRenderer->ClearColor({ 0.5, 0.2, 0.6, 1.0 }); 
		basicRenderer->Present(); 
	}

	delete basicWindow; 
	delete basicRenderer; 

	return 0; 
}