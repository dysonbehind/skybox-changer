#include "console.h"
#include <iostream>
#include <windows.h>
#include <iomanip>



bool console::create_console(const char* title)
{
    if (!AllocConsole())
        return false;

    FILE* file = nullptr;
    freopen_s(&file, xorstr_("CONOUT$"), xorstr_("w"), stdout);
    SetConsoleTitleA(title);

    return false;
}

void console::destroy_console()
{

    FreeConsole();
    fclose(stdout);

}