#include "MyForm.h"
#include <Windows.h>

// Убираем using namespace Project4;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm());  // Обратите внимание на скобки после MyForm
    return 0;
}