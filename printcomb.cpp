#include <iostream>

using namespace std;

void PrintComb() {
    for (char i{'0'}; i <= '7'; i++){
        for (char j{char(i+1)}; j <= '8'; j++){
            for (char k{char(j+1)}; k <= '9'; k++){
                cout <<i<<j<<k<<',';
            }
        }
    }
}

int main() {
    PrintComb();
    cout << "\n";
    cout << char('0'+1);
    return 0;
}