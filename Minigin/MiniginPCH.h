#pragma once

#include "targetver.h"

#include <stdio.h>
#include <iostream> // std::cout
#include <sstream> // stringstream
#include <tchar.h>
#include <memory> // smart pointers
#include <vector>


#define WIN32_LEAN_AND_MEAN
#define UNREFERENCED_PARAMETER(P)	(P)
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#include <windows.h>

#include "Log.h" // Various logging functions