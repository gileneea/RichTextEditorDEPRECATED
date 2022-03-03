// Font UI Lib.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "Font UI Lib.h"
#include "../Read App Lib/Read App Lib.h"
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
FontUILib::FontUILib()
{
    return;
}

string FontUILib::getFont() {
    cout << "Returning contents font" << endl;
    return font;
}
