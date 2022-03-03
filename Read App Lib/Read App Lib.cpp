// Read App Lib.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "Read App Lib.h"
#include "../Core/Core.h"
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
ReadAppLib::ReadAppLib()
{
    return;
}

void ReadAppLib::readContent() {
    cout << "Reading file contents" << endl;
    return;
}