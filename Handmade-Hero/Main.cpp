#include <windows.h>

// Prints ASCII encoded message to windows debugger
void printDebugWin(const char* message);

int CALLBACK WinMain(HINSTANCE instance, HINSTANCE prevInstance, LPSTR cmdLine, int cmdShow) {

    printDebugWin("Program Initialising.\n");



    printDebugWin("program Initialised");

    MessageBox(0, "Handmade Hero Is Working!", "Handmade Hero Message", MB_OK|MB_ICONINFORMATION);

    printDebugWin("Program Exited");
    return(0);
}

void printDebugWin(const char* message) {
    OutputDebugStringA(message);
}