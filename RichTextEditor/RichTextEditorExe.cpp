// RichTextEditorExe.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "../Core/Core.h"
#include "../Font UI Lib/Font UI Lib.h"
#include "../FontColor UI Lib/FontColor UI Lib.h"
#include "../FontSize UI Lib/FontSize UI Lib.h"
#include "../Read App Lib/Read App Lib.h"
#include "../Save App Lib/Save App Lib.h"
#include "../Write App Lib/Write App Lib.h"
#include <iostream>
using namespace std;

int main()
{
    string local = "en_US";
    //string local = "de_DE";

    // CORE FUNCTION CALLS
    Core RTE;
    RTE.getContent();

    // UI FUNCTION CALLS
    FontUILib font;
    font.getFont();

    FontColorUILib fontColor;
    fontColor.getFontColor();

    FontSizeUILib fontSize;
    fontSize.getFontSize();

    // APP FUNCTIONS CALLS
    ReadAppLib read;
    read.readContent();

    SaveAppLib save;
    save.saveContent();

    WriteAppLib write;
    write.writeContent();

    // Libaries
    // Core
    // - Core
    // UI 
    // - FontColor
    // - FontSize
    // - Font
    // App
    // - Writing
    // - Reading
    // - Saving
}
