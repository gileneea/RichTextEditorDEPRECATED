// Write App Lib.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "Write App Lib.h"
#include "../Core/Core.h"
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
WriteAppLib::WriteAppLib()
{
    return;
}

void WriteAppLib::writeContent() {
    cout << "Writing file contents" << endl;
    return;
}
