// FontSize UI Lib.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "FontSize UI Lib.h"
#include "../Read App Lib/Read App Lib.h"
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
FontSizeUILib::FontSizeUILib()
{
    return;
}

string FontSizeUILib::getFontSize() {
    cout << "Returning contents font size" << endl;
    return fontSize;
}
