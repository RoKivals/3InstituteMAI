#include <Windows.h>
#include "MainWindow.h"

using namespace LinearEquationGUI;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MainWindow);
    return 0;
}