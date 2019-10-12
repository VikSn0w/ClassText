#include "classHead.h"
/*
void TEXTFIELD::SetSize(int Width, int Height)
{
    HANDLE outcon = GetStdHandle(STD_OUTPUT_HANDLE);//you don't have to call this function every time
    CONSOLE_FONT_INFOEX font;//CONSOLE_FONT_INFOEX is defined in some windows header
    GetCurrentConsoleFontEx(outcon, false, &font);//PCONSOLE_FONT_INFOEX is the same as CONSOLE_FONT_INFOEX*
    font.dwFontSize.X = Width;
    font.dwFontSize.Y = Height;
    SetCurrentConsoleFontEx(outcon, false, &font);
	SizeX = Width; SizeY = Height;
}
*/

//Cambia la posizione
void TEXTFIELD::SetPosition(int X, int Y)
{
    COORD Cur = {SHORT(X), SHORT(Y)};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	PositionX = X; PositionY = Y;
}

//Cambia il colore
void TEXTFIELD::SetColor(string TextColor, string BackColor)
{
    int Color;

    //ciclo per la normalizzazione dei caratteri a tutto maiuscolo
    for(int i = 0; i < TextColor.length(); i++){TextColor[i] = toupper(TextColor[i]);}
    for(int i = 0; i < BackColor.length(); i++){BackColor[i] = toupper(BackColor[i]);}

    //Cicli di controllo per il colore e relativo "mixagio"
    if(BackColor == "BLACK")
    {
        if(TextColor == "BLACK")     Color = 0x00;
        if(TextColor == "BLUE")      Color = 0x01;
        if(TextColor == "GREEN")     Color = 0x02;
        if(TextColor == "CYAN")      Color = 0x03;
        if(TextColor == "RED")       Color = 0x04;
        if(TextColor == "MAGENTA")   Color = 0x05;
        if(TextColor == "BROWN")     Color = 0x06;
        if(TextColor == "WHITE")     Color = 0x07;
        if(TextColor == "GRAY")      Color = 0x08;
        if(TextColor == "BBLUE")     Color = 0x09;
        if(TextColor == "BGREEN")    Color = 0x0A;
        if(TextColor == "BCYAN")     Color = 0x0B;
        if(TextColor == "BRED")      Color = 0x0C;
        if(TextColor == "BMAGENTA")  Color = 0x0D;
        if(TextColor == "BYELLOW")   Color = 0x0E;
        if(TextColor == "BWHITE")    Color = 0x0F;
    }
    if(BackColor == "BLUE")
    {
        if(TextColor == "BLACK")     Color = 0x10;
        if(TextColor == "BLUE")      Color = 0x11;
        if(TextColor == "GREEN")     Color = 0x12;
        if(TextColor == "CYAN")      Color = 0x13;
        if(TextColor == "RED")       Color = 0x14;
        if(TextColor == "MAGENTA")   Color = 0x15;
        if(TextColor == "BROWN")     Color = 0x16;
        if(TextColor == "WHITE")     Color = 0x17;
        if(TextColor == "GRAY")      Color = 0x18;
        if(TextColor == "BBLUE")     Color = 0x19;
        if(TextColor == "BGREEN")    Color = 0x1A;
        if(TextColor == "BCYAN")     Color = 0x1B;
        if(TextColor == "BRED")      Color = 0x1C;
        if(TextColor == "BMAGENTA")  Color = 0x1D;
        if(TextColor == "BYELLOW")   Color = 0x1E;
        if(TextColor == "BWHITE")    Color = 0x1F;
    }
    if(BackColor == "GREEN")
    {
        if(TextColor == "BLACK")           Color = 0x20;
        if(TextColor == "BLUE")            Color = 0x21;
        if(TextColor == "GREEN")           Color = 0x22;
        if(TextColor == "CYAN")            Color = 0x23;
        if(TextColor == "RED")             Color = 0x24;
        if(TextColor == "MAGENTA")         Color = 0x25;
        if(TextColor == "BROWN")           Color = 0x26;
        if(TextColor == "WHITE")           Color = 0x27;
        if(TextColor == "GRAY")            Color = 0x28;
        if(TextColor == "BBLUE")           Color = 0x29;
        if(TextColor == "BGREEN")    Color = 0x2A;
        if(TextColor == "BCYAN")     Color = 0x2B;
        if(TextColor == "BRED")      Color = 0x2C;
        if(TextColor == "BMAGENTA")  Color = 0x2D;
        if(TextColor == "BYELLOW")   Color = 0x2E;
        if(TextColor == "BWHITE")    Color = 0x2F;
    }
    if(BackColor == "CYAN")
    {
        if(TextColor == "BLACK")           Color = 0x30;
        if(TextColor == "BLUE")            Color = 0x31;
        if(TextColor == "GREEN")           Color = 0x32;
        if(TextColor == "CYAN")            Color = 0x33;
        if(TextColor == "RED")             Color = 0x34;
        if(TextColor == "MAGENTA")         Color = 0x35;
        if(TextColor == "BROWN")           Color = 0x36;
        if(TextColor == "WHITE")           Color = 0x37;
        if(TextColor == "GRAY")            Color = 0x38;
        if(TextColor == "BBLUE")     Color = 0x39;
        if(TextColor == "BGREEN")    Color = 0x3A;
        if(TextColor == "BCYAN")     Color = 0x3B;
        if(TextColor == "BRED")      Color = 0x3C;
        if(TextColor == "BMAGENTA")  Color = 0x3D;
        if(TextColor == "BYELLOW")   Color = 0x3E;
        if(TextColor == "BWHITE")    Color = 0x3F;
    }
    if(BackColor == "RED")
    {
        if(TextColor == "BLACK")           Color = 0x40;
        if(TextColor == "BLUE")            Color = 0x41;
        if(TextColor == "GREEN")           Color = 0x42;
        if(TextColor == "CYAN")            Color = 0x43;
        if(TextColor == "RED")             Color = 0x44;
        if(TextColor == "MAGENTA")         Color = 0x45;
        if(TextColor == "BROWN")           Color = 0x46;
        if(TextColor == "WHITE")           Color = 0x47;
        if(TextColor == "GRAY")            Color = 0x48;
        if(TextColor == "BBLUE")     Color = 0x49;
        if(TextColor == "BGREEN")    Color = 0x4A;
        if(TextColor == "BCYAN")     Color = 0x4B;
        if(TextColor == "BRED")      Color = 0x4C;
        if(TextColor == "BMAGENTA")  Color = 0x4D;
        if(TextColor == "BYELLOW")   Color = 0x4E;
        if(TextColor == "BWHITE")    Color = 0x4F;
    }
    if(BackColor == "MAGENTA")
    {
        if(TextColor == "BLACK")           Color = 0x50;
        if(TextColor == "BLUE")            Color = 0x51;
        if(TextColor == "GREEN")           Color = 0x52;
        if(TextColor == "CYAN")            Color = 0x53;
        if(TextColor == "RED")             Color = 0x54;
        if(TextColor == "MAGENTA")         Color = 0x55;
        if(TextColor == "BROWN")           Color = 0x56;
        if(TextColor == "WHITE")           Color = 0x57;
        if(TextColor == "GRAY")            Color = 0x58;
        if(TextColor == "BBLUE")     Color = 0x59;
        if(TextColor == "BGREEN")    Color = 0x5A;
        if(TextColor == "BCYAN")     Color = 0x5B;
        if(TextColor == "BRED")      Color = 0x5C;
        if(TextColor == "BMAGENTA")  Color = 0x5D;
        if(TextColor == "BYELLOW")   Color = 0x5E;
        if(TextColor == "BWHITE")    Color = 0x5F;
    }
    if(BackColor == "BROWN")
    {
        if(TextColor == "BLACK")           Color = 0x60;
        if(TextColor == "BLUE")            Color = 0x61;
        if(TextColor == "GREEN")           Color = 0x62;
        if(TextColor == "CYAN")            Color = 0x63;
        if(TextColor == "RED")             Color = 0x64;
        if(TextColor == "MAGENTA")         Color = 0x65;
        if(TextColor == "BROWN")           Color = 0x66;
        if(TextColor == "WHITE")           Color = 0x67;
        if(TextColor == "GRAY")            Color = 0x68;
        if(TextColor == "BBLUE")     Color = 0x69;
        if(TextColor == "BGREEN")    Color = 0x6A;
        if(TextColor == "BCYAN")     Color = 0x6B;
        if(TextColor == "BRED")      Color = 0x6C;
        if(TextColor == "BMAGENTA")  Color = 0x6D;
        if(TextColor == "BYELLOW")   Color = 0x6E;
        if(TextColor == "BWHITE")    Color = 0x6F;
    }
    if(BackColor == "WHITE")
    {
        if(TextColor == "BLACK")           Color = 0x70;
        if(TextColor == "BLUE")            Color = 0x71;
        if(TextColor == "GREEN")           Color = 0x72;
        if(TextColor == "CYAN")            Color = 0x73;
        if(TextColor == "RED")             Color = 0x74;
        if(TextColor == "MAGENTA")         Color = 0x75;
        if(TextColor == "BROWN")           Color = 0x76;
        if(TextColor == "WHITE")           Color = 0x77;
        if(TextColor == "GRAY")            Color = 0x78;
        if(TextColor == "BBLUE")     Color = 0x79;
        if(TextColor == "BGREEN")    Color = 0x7A;
        if(TextColor == "BCYAN")     Color = 0x7B;
        if(TextColor == "BRED")      Color = 0x7C;
        if(TextColor == "BMAGENTA")  Color = 0x7D;
        if(TextColor == "BYELLOW")   Color = 0x7E;
        if(TextColor == "BWHITE")    Color = 0x7F;
    }
    if(BackColor == "GRAY")
    {
        if(TextColor == "BLACK")           Color = 0x80;
        if(TextColor == "BLUE")            Color = 0x81;
        if(TextColor == "GREEN")           Color = 0x82;
        if(TextColor == "CYAN")            Color = 0x83;
        if(TextColor == "RED")             Color = 0x84;
        if(TextColor == "MAGENTA")         Color = 0x85;
        if(TextColor == "BROWN")           Color = 0x86;
        if(TextColor == "WHITE")           Color = 0x87;
        if(TextColor == "GRAY")            Color = 0x88;
        if(TextColor == "BBLUE")     Color = 0x89;
        if(TextColor == "BGREEN")    Color = 0x8A;
        if(TextColor == "BCYAN")     Color = 0x8B;
        if(TextColor == "BRED")      Color = 0x8C;
        if(TextColor == "BMAGENTA")  Color = 0x8D;
        if(TextColor == "BYELLOW")   Color = 0x8E;
        if(TextColor == "BWHITE")    Color = 0x8F;
    }
    if(BackColor == "BBLUE")
    {
        if(TextColor == "BLACK")           Color = 0x90;
        if(TextColor == "BLUE")            Color = 0x91;
        if(TextColor == "GREEN")           Color = 0x92;
        if(TextColor == "CYAN")            Color = 0x93;
        if(TextColor == "RED")             Color = 0x94;
        if(TextColor == "MAGENTA")         Color = 0x95;
        if(TextColor == "BROWN")           Color = 0x96;
        if(TextColor == "WHITE")           Color = 0x97;
        if(TextColor == "GRAY")            Color = 0x98;
        if(TextColor == "BBLUE")     Color = 0x99;
        if(TextColor == "BGREEN")    Color = 0x9A;
        if(TextColor == "BCYAN")     Color = 0x9B;
        if(TextColor == "BRED")      Color = 0x9C;
        if(TextColor == "BMAGENTA")  Color = 0x9D;
        if(TextColor == "BYELLOW")   Color = 0x9E;
        if(TextColor == "BWHITE")    Color = 0x9F;
    }
    if(BackColor == "BGREEN")
    {
        if(TextColor == "BLACK")           Color = 0xA0;
        if(TextColor == "BLUE")            Color = 0xA1;
        if(TextColor == "GREEN")           Color = 0xA2;
        if(TextColor == "CYAN")            Color = 0xA3;
        if(TextColor == "RED")             Color = 0xA4;
        if(TextColor == "MAGENTA")         Color = 0xA5;
        if(TextColor == "BROWN")           Color = 0xA6;
        if(TextColor == "WHITE")           Color = 0xA7;
        if(TextColor == "GRAY")            Color = 0xA8;
        if(TextColor == "BBLUE")     Color = 0xA9;
        if(TextColor == "BGREEN")    Color = 0xAA;
        if(TextColor == "BCYAN")     Color = 0xAB;
        if(TextColor == "BRED")      Color = 0xAC;
        if(TextColor == "BMAGENTA")  Color = 0xAD;
        if(TextColor == "BYELLOW")   Color = 0xAE;
        if(TextColor == "BWHITE")    Color = 0xAF;
    }
    if(BackColor == "BCYAN")
    {
        if(TextColor == "BLACK")           Color = 0xB0;
        if(TextColor == "BLUE")            Color = 0xB1;
        if(TextColor == "GREEN")           Color = 0xB2;
        if(TextColor == "CYAN")            Color = 0xB3;
        if(TextColor == "RED")             Color = 0xB4;
        if(TextColor == "MAGENTA")         Color = 0xB5;
        if(TextColor == "BROWN")           Color = 0xB6;
        if(TextColor == "WHITE")           Color = 0xB7;
        if(TextColor == "GRAY")            Color = 0xB8;
        if(TextColor == "BBLUE")     Color = 0xB9;
        if(TextColor == "BGREEN")    Color = 0xBA;
        if(TextColor == "BCYAN")     Color = 0xBB;
        if(TextColor == "BRED")      Color = 0xBC;
        if(TextColor == "BMAGENTA")  Color = 0xBD;
        if(TextColor == "BYELLOW")   Color = 0xBE;
        if(TextColor == "BWHITE")    Color = 0xBF;
    }
    if(BackColor == "BRED")
    {
        if(TextColor == "BLACK")           Color = 0xC0;
        if(TextColor == "BLUE")            Color = 0xC1;
        if(TextColor == "GREEN")           Color = 0xC2;
        if(TextColor == "CYAN")            Color = 0xC3;
        if(TextColor == "RED")             Color = 0xC4;
        if(TextColor == "MAGENTA")         Color = 0xC5;
        if(TextColor == "BROWN")           Color = 0xC6;
        if(TextColor == "WHITE")           Color = 0xC7;
        if(TextColor == "GRAY")            Color = 0xC8;
        if(TextColor == "BBLUE")     Color = 0xC9;
        if(TextColor == "BGREEN")    Color = 0xCA;
        if(TextColor == "BCYAN")     Color = 0xCB;
        if(TextColor == "BRED")      Color = 0xCC;
        if(TextColor == "BMAGENTA")  Color = 0xCD;
        if(TextColor == "BYELLOW")   Color = 0xCE;
        if(TextColor == "BWHITE")    Color = 0xCF;
    }
    if(BackColor == "BMAGENTA")
    {
        if(TextColor == "BLACK")           Color = 0xD0;
        if(TextColor == "BLUE")            Color = 0xD1;
        if(TextColor == "GREEN")           Color = 0xD2;
        if(TextColor == "CYAN")            Color = 0xD3;
        if(TextColor == "RED")             Color = 0xD4;
        if(TextColor == "MAGENTA")         Color = 0xD5;
        if(TextColor == "BROWN")           Color = 0xD6;
        if(TextColor == "WHITE")           Color = 0xD7;
        if(TextColor == "GRAY")            Color = 0xD8;
        if(TextColor == "BBLUE")     Color = 0xD9;
        if(TextColor == "BGREEN")    Color = 0xDA;
        if(TextColor == "BCYAN")     Color = 0xDB;
        if(TextColor == "BRED")      Color = 0xDC;
        if(TextColor == "BMAGENTA")  Color = 0xDD;
        if(TextColor == "BYELLOW")   Color = 0xDE;
        if(TextColor == "BWHITE")    Color = 0xDF;
    }
    if(BackColor == "BYELLOW")
    {
        if(TextColor == "BLACK")           Color = 0xE0;
        if(TextColor == "BLUE")            Color = 0xE1;
        if(TextColor == "GREEN")           Color = 0xE2;
        if(TextColor == "CYAN")            Color = 0xE3;
        if(TextColor == "RED")             Color = 0xE4;
        if(TextColor == "MAGENTA")         Color = 0xE5;
        if(TextColor == "BROWN")           Color = 0xE6;
        if(TextColor == "WHITE")           Color = 0xE7;
        if(TextColor == "GRAY")            Color = 0xE8;
        if(TextColor == "BBLUE")     Color = 0xE9;
        if(TextColor == "BGREEN")    Color = 0xEA;
        if(TextColor == "BCYAN")     Color = 0xEB;
        if(TextColor == "BRED")      Color = 0xEC;
        if(TextColor == "BMAGENTA")  Color = 0xED;
        if(TextColor == "BYELLOW")   Color = 0xEE;
        if(TextColor == "BWHITE")    Color = 0xEF;
    }
    if(BackColor == "BWHITE")
    {
        if(TextColor == "BLACK")           Color = 0xF0;
        if(TextColor == "BLUE")            Color = 0xF1;
        if(TextColor == "GREEN")           Color = 0xF2;
        if(TextColor == "CYAN")            Color = 0xF3;
        if(TextColor == "RED")             Color = 0xF4;
        if(TextColor == "MAGENTA")         Color = 0xF5;
        if(TextColor == "BROWN")           Color = 0xF6;
        if(TextColor == "WHITE")           Color = 0xF7;
        if(TextColor == "GRAY")            Color = 0xF8;
        if(TextColor == "BBLUE")     Color = 0xF9;
        if(TextColor == "BGREEN")    Color = 0xFA;
        if(TextColor == "BCYAN")     Color = 0xFB;
        if(TextColor == "BRED")      Color = 0xFC;
        if(TextColor == "BMAGENTA")  Color = 0xFD;
        if(TextColor == "BYELLOW")   Color = 0xFE;
        if(TextColor == "BWHITE")    Color = 0xFF;
    }

    MainColor = Color;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, MainColor);
}

//Stampa
void TEXTFIELD::Print()
{
    cout << MainText;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 0x0F); //Rimette il colore default della console
}

//Pone il MainText uguale alla classe
void TEXTFIELD::TextField(string Text){MainText = Text;};

//
void TEXTFIELD::Help()
{
    system("cls");
    cout << "The TextField Class creates text fields-like object,\nthat have the following methods:" << endl << endl;
    cout << "Text.SetPosition(PositionX, PositionY): with this method you can place your text field everywhere on the screen" << endl << endl;
    cout << "Text.SetColor(TextColor, BackColor): with this method you can change the color of the text (font and background), for more details see the readme" << endl << endl;
    cout << "Text.TextField(Text): with this method you can write inside the object" << endl << endl;
    cout << "Text.Print(): with this method you can print the final object" << endl << endl;
    cout << endl;
    cout << endl;
    system("pause");
}
//Inizializzazione classe
TEXTFIELD::TEXTFIELD(){MainText = ""; MainColor = 0x0F; SizeX = SizeY = PositionX = PositionY = 0;};
