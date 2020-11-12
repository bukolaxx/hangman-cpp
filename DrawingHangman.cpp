//
// Created by Bukola Obajemu on 10/23/19.
//

#include "DrawingHangman.h"
#include<iostream>
using namespace std;


void DrawingHangman::Draw(int count)
{
    if (count == 6)
    {
        cout << "                      " << endl;
        cout << "        _______       " << endl;
        cout << "       |       |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "          _____|      " << endl;
        cout << "                      " << endl;
    }
    if (count == 5)
    {
        cout << "                      " << endl;
        cout << "        _______       " << endl;
        cout << "       |       |      " << endl;
        cout << "      ( )      |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "          _____|      " << endl;
        cout << "                      " << endl;
    }
    if (count == 4)
    {
        cout << "                      " << endl;
        cout << "        _______       " << endl;
        cout << "       |       |      " << endl;
        cout << "      ( )      |      " << endl;
        cout << "       |       |      " << endl;
        cout << "       |       |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "          _____|      " << endl;
        cout << "                      " << endl;
    }
    if (count == 3)
    {
        cout << "                      " << endl;
        cout << "        _______       " << endl;
        cout << "       |       |      " << endl;
        cout << "      ( )      |      " << endl;
        cout << "       |       |      " << endl;
        cout << "     --|       |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "          _____|      " << endl;
        cout << "                      " << endl;
    }
    if (count == 2)
    {
        cout << "                      " << endl;
        cout << "        _______       " << endl;
        cout << "       |       |      " << endl;
        cout << "      ( )      |      " << endl;
        cout << "       |       |      " << endl;
        cout << "     --|--     |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "          _____|      " << endl;
        cout << "                      " << endl;
    }
    if (count == 1)
    {
        cout << "                      " << endl;
        cout << "        _______       " << endl;
        cout << "       |       |      " << endl;
        cout << "      ( )      |      " << endl;
        cout << "       |       |      " << endl;
        cout << "     --|--     |      " << endl;
        cout << "      /        |      " << endl;
        cout << "     /         |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "          _____|      " << endl;
        cout << "                      " << endl;
        cout << "    ONE LAST TRY!     " << endl;
    }
    if (count == 0)
    {
        cout << "                      " << endl;
        cout << "        _______       " << endl;
        cout << "       |       |      " << endl;
        cout << "      ( )      |      " << endl;
        cout << "       |       |      " << endl;
        cout << "     --|--     |      " << endl;
        cout << "      / \\      |      " << endl;
        cout << "     /   \\     |      " << endl;
        cout << "               |      " << endl;
        cout << "               |      " << endl;
        cout << "          _____|      " << endl;
        cout << "                      " << endl;
    }
}
void DrawingHangman::DrawTitle()
{
    cout << " _____________________________________\n";
    cout << "|                                     |\n";
    cout << "|          WELCOME TO HANGMAN!        |\n";
    cout << "|               ( )                   |\n";
    cout << "|              --|--                  |\n";
    cout << "|               / \\                   |\n";
    cout << "|_____________________________________|\n";
}
