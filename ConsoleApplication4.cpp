#include <windows.h>
#include <iostream>
#include<Mmsystem.h>
#pragma comment(lib,"winmm.lib")
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )
using namespace std;
int main()
{A:
	if (KEY_DOWN(VK_LBUTTON)) {
		PlaySound(TEXT("c.wav"), NULL, SND_ASYNC | SND_NODEFAULT);
		for (;;) {
			MessageBox(NULL, TEXT("Да здравствует великий Советский Союз"), TEXT("Ypa!"), MB_OK | MB_ICONEXCLAMATION);
			WM_CLOSE;
		}

	}
	else {
	
	
		goto A;
	}

}
