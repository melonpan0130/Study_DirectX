#include "DXApp.h"

class TestApp : public DXApp
{
public:
	TestApp(HINSTANCE hInstance);
	~TestApp();

	bool Init() override;
	void Update(float dt)override;
	void Render(float dt)override;
};

TestApp::TestApp(HINSTANCE hInstance) : DXApp(hInstance)
{ 

}

TestApp::~TestApp()
{
}

bool TestApp::Init()
{
	return DXApp::Init();
}

void TestApp::Update(float dt)
{
}

void TestApp::Render(float dt)
{
}

int WINAPI WinMain(__in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in LPSTR lpCmdLine, __in int nShowCmd)
{
	// MessageBox(NULL, "test", "helloworld", NULL);
	TestApp tApp(hInstance);

	if (!tApp.Init())return 1;

	return tApp.Run();
	return 0;
}