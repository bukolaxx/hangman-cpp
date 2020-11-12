//
// Created by Bukola Obajemu on 10/23/19.
//

#ifndef HANGMAN2_GAME_H
#define HANGMAN2_GAME_H


#include<string>
#include <iostream>
#include <fstream>
#include <string>
#include "DrawingHangman.h"
using namespace std;


class game: public DrawingHangman{

private:

    int tries;
    string TheWord;
    string level;
    int wrong_guess=0;

public:

    char guess_letter;
    string guess_word;
    game();
    string get_word();
    void get_level_word();
    void guess_the_word();
    int num_of_wrong_guesses();
    void get_word_info();
    void save_to_file();


};


#endif //HANGMAN2_GAME_H
