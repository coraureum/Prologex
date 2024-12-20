#include <iostream>
//#include <curses.h>
int main (int argc, char *argv[]){
    char Resp;
    while (Resp != 'N'){
    std::cout << "Hello\n";
    std::cin >> Resp;
    std::cout << Resp << '\n';
    system("clear");
    }
    //int erase(void);
    return 0;
}
