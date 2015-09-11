#include <windows.h>
#include <io.stream>
#include "stdafx.h"

/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

/*  Make the class name into a global variable  */
char szClassName[] = "WindowsApp";

int WINAPI WinMain(HINSTANCE hThisInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpszArgument,
	int nFunsterStil)

{
	HWND hwnd;               /* This is the handle for our window */
	MSG messages;            /* Here messages to the application are saved */
	WNDCLASSEX wincl;        /* Data structure for the windowclass */

							 /* The Window structure */
	wincl.hInstance = hThisInstance;
	wincl.lpszClassName = szClassName;
	wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
	wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
	wincl.cbSize = sizeof(WNDCLASSEX);

	/* Use default icon and mouse-pointer */
	wincl.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wincl.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	wincl.hCursor = LoadCursor(NULL, IDC_ARROW);
	wincl.lpszMenuName = NULL;                 /* No menu */
	wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
	wincl.cbWndExtra = 0;                      /* structure or the window instance */
											   /* Is suppose to recolor background*/
	wincl.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(0, 255, 0));

	/* Register the window class, and if it fails quit the program */
	if (!RegisterClassEx(&wincl))
		return 0;
	std::count << "Print";

	/* The class is registered, let's create the program*/
	hwnd = CreateWindowEx(
		0,                   /* Extended possibilites for variation */
		szClassName,         /* Classname */
		"Cove Client",       /* Title Text */
		WS_OVERLAPPEDWINDOW, /* default window */
		CW_USEDEFAULT,       /* Windows decides the position */
		CW_USEDEFAULT,       /* where the window ends up on the screen */
		550,                 /* The programs width */
		700,                 /* and height in pixels */
		HWND_DESKTOP,        /* The window is a child-window to desktop */
		NULL,                /* No menu */
		hThisInstance,       /* Program Instance handler */
		NULL                 /* No Window Creation data */
		);

	/* Make the window visible on the screen */
	ShowWindow(hwnd, nFunsterStil);

	/* Run the message loop. It will run until GetMessage() returns 0 */
	while (GetMessage(&messages, NULL, 0, 0))
	{
		/* Translate virtual-key messages into character messages */
		TranslateMessage(&messages);
		/* Send message to WindowProcedure */
		DispatchMessage(&messages);
	}

	/* The program return-value is 0 - The value that PostQuitMessage() gave */
	return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)                  /* handle the messages */
	{
	case   WM_CREATE:

		CreateWindow(TEXT("button"), TEXT("General Chat"),
			WS_VISIBLE | WS_CHILD,                   //other styles
			50, 120, 150, 140,
			hwnd, (HMENU)1, NULL, NULL
			);
		CreateWindow(TEXT("button"), TEXT("Game Chat"),
			WS_VISIBLE | WS_CHILD,                    //other styles
			335, 120, 150, 140,
			hwnd, (HMENU)2, NULL, NULL
			);
		CreateWindow(TEXT("button"), TEXT("Private Chat"),
			WS_VISIBLE | WS_CHILD,                   //other styles
			50, 295, 150, 140,
			hwnd, (HMENU)3, NULL, NULL
			);
		CreateWindow(TEXT("button"), TEXT("My Chats"),
			WS_VISIBLE | WS_CHILD,                   //other styles
			335, 295, 150, 140,
			hwnd, (HMENU)4, NULL, NULL
			);
		CreateWindow(TEXT("button"), TEXT("Create Chat"),
			WS_VISIBLE | WS_CHILD,                  //other styles
			50, 470, 150, 140,
			hwnd, (HMENU)5, NULL, NULL
			);
		CreateWindow(TEXT("button"), TEXT("Account"),
			WS_VISIBLE | WS_CHILD,                  //other styles
			335, 470, 150, 140,
			hwnd, (HMENU)6, NULL, NULL
			);
		break;

	case WM_COMMAND:

		if (LOWORD(wParam) == 1) {
			MessageBox(hwnd, "Insert Content Here", "General Chat", MB_OK | MB_ICONINFORMATION);
		}
		if (LOWORD(wParam) == 2) {
			MessageBox(hwnd, "Insert Content Here", "Game Chat", MB_OK | MB_ICONINFORMATION);
		}
		if (LOWORD(wParam) == 3) {
			MessageBox(hwnd, "Insert Content Here", "Private Chat", MB_OK | MB_ICONINFORMATION);
		}
		if (LOWORD(wParam) == 4) {
			MessageBox(hwnd, "Insert Content Here", "My Chat", MB_OK | MB_ICONINFORMATION);
		}
		if (LOWORD(wParam) == 5) {
			MessageBox(hwnd, "Insert Content Here", "Create Chat", MB_OK | MB_ICONINFORMATION);
		}
		if (LOWORD(wParam) == 6) {
			MessageBox(hwnd, "Insert Content Here", "My Account", MB_OK | MB_ICONINFORMATION);
		}
		break;

	case WM_DESTROY:
		PostQuitMessage(0);       /* send a WM_QUIT to the message queue */
		break;
	default:                      /* for messages that we don't deal with */
		return DefWindowProc(hwnd, message, wParam, lParam);
	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(hwnd, &ps);

		FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 0));

		RECT rc;
		rc.left = 110;              //top left cord.
		rc.top = 25;               //top left cord.
		rc.right = 420;            //bottom right cord.
		rc.bottom = 100;           //bottom right cord.
		HBRUSH hbrush = ::CreateSolidBrush(RGB(80, 80, 80));     //color select
		::FillRect(hdc, &rc, hbrush);



		EndPaint(hwnd, &ps);
	}
	}

	return 0;
}
