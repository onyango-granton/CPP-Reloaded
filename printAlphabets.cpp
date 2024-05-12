#include <iostream>

using namespace std;

int main() {
    string alphabets{"abcdefghijklmnopqrstuvwxyz"};
    for (int i{0}; i < alphabets.length(); i++){
        std::cout << alphabets[i] + 12;
    }
    std::cout << '\n';
    return 0;
}