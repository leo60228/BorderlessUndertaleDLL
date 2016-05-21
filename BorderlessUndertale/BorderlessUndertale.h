#pragma once
#ifdef BORDERLESSUNDERTALEDLL_EXPORTS
#define BORDERLESSUNDERTALESDLL_API1 __declspec(dllexport) 
#else
#define BORDERLESSUNDERTALESDLL_API1 __declspec(dllimport) 
#endif

#ifdef BORDERLESSUNDERTALEDLL_EXPORTS
#define BORDERLESSUNDERTALESDLL_API2 __declspec(dllexport) 
#else
#define BORDERLESSUNDERTALESDLL_API2 __declspec(dllimport) 
#endif

#include <windows.h>

extern "C" BORDERLESSUNDERTALESDLL_API1 HWND MakeWindow(char* utpath);
extern "C" BORDERLESSUNDERTALESDLL_API2 void MoveUTWindow(HWND UTWindow, int x, int y);