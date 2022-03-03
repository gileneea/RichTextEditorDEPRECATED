// Save App Lib.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "Save App Lib.h"
#include "../Core/Core.h"
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
SaveAppLib::SaveAppLib()
{
    return;
}

void SaveAppLib::saveContent() {
    cout << "Saving file contents" << endl;
    return;
}
