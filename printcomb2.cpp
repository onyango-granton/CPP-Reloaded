#include <iostream>

using namespace std;

void PrintComb2() {
    for (char a{'0'}; a <= '9'; a++){
        for (char b{'0'}; b<= '8';b++){
            for (char c{char(a)}; c <= '9'; c++){
                for (char d{char(b+1)}; d <= '9'; d++){
                    cout <<a<<b<<' '<<c<<d<<',';
                }
            }
        }
    }
    cout <<'\n';
}

int main() {
    PrintComb2();
    return 0;
}