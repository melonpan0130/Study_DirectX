#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h> 
#include <string>

class DXApp
{
public:
	DXApp(HINSTANCE hInstance);

	virtual ~DXApp();

	//MEAN APPLICATION LOOP
	int Run();

	//framework methods
	virtual bool Init();
	virtual void Update(float dt) = 0;
	virtual void Render(float dt) = 0;
	virtual LRESULT MsgProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

protected:
	//win 32 attributes
	HWND		m_hAppWnd;
	HINSTANCE	m_hAppInstance;
	UINT		m_ClientWidth;
	UINT		m_ClientHeight;
	std::string	m_AppTitle;
	DWORD		m_WndStyle;

protected:
	//initialize win32 window
	bool InitWindow();
};

