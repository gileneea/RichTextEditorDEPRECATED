// Core.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "Core.h"
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
Core::Core() {
    return;
}

string Core::getContent() {
    cout << "Returning content" << endl;
    return content;
}
