// FontColor UI Lib.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "FontColor UI Lib.h"
#include "../Read App Lib/Read App Lib.h"
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
FontColorUILib::FontColorUILib()
{
    return;
}

string FontColorUILib::getFontColor() {
    cout << "Returning contents font color" << endl;
    return fontColor;
}