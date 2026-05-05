#pragma once
#include <stdio.h>
#include <windows.h>
#include "../../../external/xor.h"
#include <iomanip>



namespace console
{
	auto create_console(const char* title) -> bool;
	auto destroy_console() -> void;
}