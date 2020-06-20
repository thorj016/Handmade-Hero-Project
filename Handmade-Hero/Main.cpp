#include <windows.h>

void printDebug(const char* message);

int CALLBACK WinMain(HINSTANCE instance, HINSTANCE prevInstance, LPSTR cmdLine, int cmdShow) {


    return(0);
}

void printDebug(const char* message) {
    OutputDebugStringA(message);
}