#include <windows.h>
#include <iostream>
#include <gdiplus.h>
VOID WINAPI sound1() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t*5&(t>>7)|(t*0&t/1024))-1;

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound2() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t*t>>9|t<<3);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound3() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 16000, 16000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[16000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t>>6|t|t>>(t>>17))*10+((t>>11)&7);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound4() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 11000, 11000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[11000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t * (t ^ t + (t >> 8 | 1) / (t - 12800 ^ t) >> 10));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound5() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t>>t|t);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound6() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t*(t>>2|t>>6));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound7() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 22000, 22000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[22000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t * ((t >> 6 | t >> 11) & 15 & t >> 9)) * t >> 10;

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound8() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t*(t>>10|t>>11));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound9() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t * (t >> 7 & t >> 1));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound10() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 11000, 11000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[11000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t*(t>>t*t));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
DWORD WINAPI balls(LPVOID lpParam) {
	int w = GetSystemMetrics(0), h = GetSystemMetrics(1);
	int signX = 1;
    int signY = 1;
    int signX1 = 1;
    int signY1 = 1;
    int incrementor = 10;
    int x = 10;
    int y = 10;
	while(1){
		HDC hdc = GetDC(0);
        x += incrementor * signX;
        y += incrementor * signY;
		int top_x = 0 + x;
        int top_y = 0 + y;
        int bottom_x = 100 + x;
        int bottom_y = 100 + y; 
    	HBRUSH brush = CreateSolidBrush(RGB(0,0,255));
    	SelectObject(hdc, brush);
		Ellipse(hdc, top_x, top_y, bottom_x, bottom_y);
        if (y >= GetSystemMetrics(SM_CYSCREEN))
        {
                signY = -1;
        }
 
        if (x >= GetSystemMetrics(SM_CXSCREEN))
        {
            signX = -1;
        }
 
        if (y == 0)
        {
            signY = 1;
        }
 
        if (x == 0)
        {
            signX = 1;
        }
        Sleep(10);
    	DeleteObject(brush);
        ReleaseDC(0, hdc);
	}
}
DWORD WINAPI train(LPVOID lpParam) {
	int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
    while (1) {
        HDC hdc = GetDC(0);
        BitBlt(hdc, -30, 0, w, h, hdc, 0, 0, SRCCOPY);
        BitBlt(hdc, w - 30, 0, w, h, hdc, 0, 0, SRCCOPY);
        BitBlt(hdc, 0, 0, w, h, hdc, 0, -30, SRCCOPY);
        BitBlt(hdc, 0, 0, w, h, hdc, 0, h - 30, SRCCOPY);
        ReleaseDC(0, hdc);
        //Sleep(10);
    }
}
DWORD WINAPI cubes(LPVOID lpParam) {
	while(1){
		HDC hdc = GetDC(0);
    	int x = GetSystemMetrics(0);
    	int y = GetSystemMetrics(1);
    	StretchBlt(hdc, -10, -10, x + 20, y + 20, hdc, 0, 0, x, y, SRCINVERT);
    	StretchBlt(hdc, 10, 10, x - 20, y - 20, hdc, 0, 0, x, y, SRCINVERT);
    	ReleaseDC(0, hdc);
	}
}	
DWORD WINAPI stretchblt(LPVOID lpParam) {
	HDC desk;
	int sw, sh;
	
	while(1){
		desk = GetDC(0);
		sw = GetSystemMetrics(0);
		sh = GetSystemMetrics(1);
		StretchBlt(desk, 00, 0, sw+40, sh, desk, 0, 0, sw, sh, SRCCOPY);
		ReleaseDC(0, desk);
		Sleep(4);
	}
}
DWORD WINAPI icons(LPVOID lpParam) {
	    while (true) {
        HDC hdc = GetDC(0);
        int x = GetSystemMetrics(0);
        int y = GetSystemMetrics(1);
        DrawIconEx(hdc, rand() % x, rand() % y, LoadIcon(0, IDI_ERROR), (rand() % 5 + 1) * GetSystemMetrics(11), (rand() % 5 + 1) * GetSystemMetrics(12), 0, NULL, DI_NORMAL);
        ReleaseDC(0, hdc);
        Sleep(10);
    }
}
DWORD WINAPI bitblt(LPVOID lpParam) {
	    while (1) {
        HDC hdc = GetDC(0);
        int x = SM_CXSCREEN;
        int y = SM_CYSCREEN;
        int w = GetSystemMetrics(0);
        int h = GetSystemMetrics(1);
        BitBlt(hdc, rand() % 666, rand() % 666, w, h, hdc, rand() % 666, rand() % 666, NOTSRCCOPY);
        Sleep(10);
        ReleaseDC(0, hdc);
    }
}
VOID WINAPI train2(HDC hdc, int w, int h, int xPower, int yPower, DWORD dwRop) {
	if (xPower >= w) xPower = w - 1; if (yPower >= h) yPower = h - 1;
	HBITMAP screenshot = CreateCompatibleBitmap(hdc, w, h);
	HDC hdc2 = CreateCompatibleDC(hdc); rand() % 6;
	SelectObject(hdc2, screenshot);
	BitBlt(hdc2, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
	BitBlt(hdc, xPower > 0 ? xPower : 0, yPower > 0 ? yPower : 0, w - abs(xPower), h - abs(yPower), hdc, xPower < 0 ? -xPower : 0, yPower < 0 ? -yPower : 0, dwRop);
	BitBlt(hdc, xPower < 0 ? w + xPower : 0, 0, abs(xPower), h, hdc2, xPower > 0 ? w - xPower : 0, 0, dwRop);
	BitBlt(hdc, 0, yPower < 0 ? h + yPower : 0, w, abs(yPower), hdc2, 0, yPower > 0 ? h - yPower : 0, dwRop);
	DeleteDC(hdc2); DeleteObject(screenshot);
}
DWORD WINAPI roto(LPVOID lpParam) {
	HDC hdcdc = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	while (1) {
		hdcdc = GetDC(0);
		//SelectObject(desk, CreateSolidBrush(RGB(245, 245, 66)));
		for (int angle = 0; angle < 361; angle++) {
			int x = 100 * cos(angle * M_PI / 180.F), y = 100 * sin(angle * M_PI / 180.F);
			train2(hdcdc, sw, sh, x, y, SRCCOPY);
			Sleep(0.5);
		}
		ReleaseDC(0, hdcdc);
	}
}
DWORD WINAPI textout(LPVOID lpParam) {
	int x = GetSystemMetrics(0); int y = GetSystemMetrics(1);
	LPCSTR text = 0;
	while (1)
	{
		HDC hdc = GetDC(0);
		SetBkMode(hdc, 0);
		text = "Unquadtrium.exe";
		SetTextColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
		HFONT font = CreateFontA(43, 32, 0, 0, FW_THIN, 0, 1, 0, ANSI_CHARSET, 0, 0, 0, 0, "Baby Kruffy");
		SelectObject(hdc, font);
		TextOutA(hdc, rand() % x, rand() % y, text, strlen(text));
		Sleep(100);
		DeleteObject(font);
		ReleaseDC(0, hdc);
	}
}
DWORD WINAPI movingscreen(LPVOID lpParam) {
	    while (1) {
        HDC hdc = GetDC(0);
        int x = SM_CXSCREEN;
        int y = SM_CYSCREEN;
        int w = GetSystemMetrics(0);
        int h = GetSystemMetrics(1);
        BitBlt(hdc, 14, 14, w, h, hdc, 12, 12, SRCCOPY);
        Sleep(10);
    }
}
DWORD WINAPI shake(LPVOID lpParam)
{
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	double angle = 0;
	while (1)
	{
		desk = GetDC(0);
		int ax = (int)(cos(angle) * 5.0);
		int ay = (int)(sin(angle) * 5.0);
		BitBlt(desk, ax, ay, sw, sh, desk, 0, 0, SRCERASE);
		angle = fmod(angle + M_PI / 16.f, M_PI * 2.f);
		ReleaseDC(0, desk);
	}
}
DWORD WINAPI screenpartsshader(LPVOID lpParam)
{
    int x = GetSystemMetrics(SM_CXSCREEN);
    int y = GetSystemMetrics(SM_CYSCREEN);
    while (1)
    {
        HDC hdc = GetDC(0);
        HDC desk = GetDC(NULL);
        StretchBlt(desk, rand() % 1200, rand() % 1200, rand() % 1200, rand() % 100 + 200, hdc, rand() % 200, rand() % 1200, rand() % 1200, rand() % 200 + 999 - 87, SRCINVERT);
        ReleaseDC(0, hdc);
        Sleep(10);
    }
}
DWORD WINAPI plgblt(LPVOID lpParam)
{
	HDC hdc = GetDC(0);
	RECT wRect;
	POINT wPt[3];
	while (1)
	{
		GetWindowRect(GetDesktopWindow(), &wRect);
		wPt[0].x = wRect.left + 100;
		wPt[0].y = wRect.top - 100;
		wPt[1].x = wRect.right + 100;
		wPt[1].y = wRect.top - 0;
		wPt[2].x = wRect.left + 0;
		wPt[2].y = wRect.bottom + 0;
		PlgBlt(hdc, wPt, hdc, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);
	}
}
int main(){
	    if (MessageBoxW(NULL, L"Run Malware?", L"Unquadtrium.exe", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
    {
        ExitProcess(0);
    }
    else
    {
        if (MessageBoxW(NULL, L"Are You Sure?", L"Unquadtrium.exe", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
        {
            ExitProcess(0);
        }
        else{
       	    HANDLE tt1 = CreateThread(0, 0, balls, 0, 0, 0);
        	HANDLE t1 = CreateThread(0, 0, train, 0, 0, 0);
            sound1();
        	Sleep(30000);
            TerminateThread(t1, 0);
            CloseHandle(t1);
            HANDLE t2 = CreateThread(0, 0, cubes, 0, 0, 0);
            sound2();
        	Sleep(30000);
            TerminateThread(t2, 0);
            CloseHandle(t2);
            HANDLE t3 = CreateThread(0, 0, stretchblt, 0, 0, 0);
            sound3();
        	Sleep(30000);
            TerminateThread(t3, 0);
            CloseHandle(t3);
            HANDLE t4 = CreateThread(0, 0, icons, 0, 0, 0);
            sound4();
        	Sleep(30000);
            TerminateThread(t4, 0);
            CloseHandle(t4);
            HANDLE t5 = CreateThread(0, 0, bitblt, 0, 0, 0);
            sound5();
        	Sleep(30000);
            TerminateThread(t5, 0);
            CloseHandle(t5);
            HANDLE tt6 = CreateThread(0, 0, textout, 0, 0, 0);
            HANDLE t6 = CreateThread(0, 0, roto, 0, 0, 0);
            sound6();
        	Sleep(30000);
            TerminateThread(t6, 0);
            CloseHandle(t6);
            HANDLE t7 = CreateThread(0, 0, movingscreen, 0, 0, 0);
            sound7();
        	Sleep(30000);
            TerminateThread(t7, 0);
            CloseHandle(t7);
            HANDLE t8 = CreateThread(0, 0, shake, 0, 0, 0);
            sound8();
        	Sleep(30000);
            TerminateThread(t8, 0);
            CloseHandle(t8);
            HANDLE t9 = CreateThread(0, 0, screenpartsshader, 0, 0, 0);
            sound9();
        	Sleep(30000);
            TerminateThread(t9, 0);
            CloseHandle(t9);
            HANDLE t10 = CreateThread(0, 0, plgblt, 0, 0, 0);
            sound10();
        	Sleep(30000);
            TerminateThread(t10, 0);
            CloseHandle(t10);
            TerminateThread(tt6, 0);
            CloseHandle(tt6);            
            TerminateThread(tt1, 0);
            CloseHandle(tt1);
		}
    }
}
