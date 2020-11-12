#include <string>
using namespace std;
#include "game.h"


int main() {
    string TheWord;
    string level;

    game obj;
    DrawingHangman h;

    h.DrawTitle();

    obj.get_level_word();
    obj.get_word_info();
    obj.guess_the_word();
    obj.save_to_file();

}
