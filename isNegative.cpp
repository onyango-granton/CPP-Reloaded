#include <iostream>

using namespace std;

string IsNegative(int nb) {
    if (nb >= 0){
        return "F\n";
    } 
    return "T\n";
}

int main() {
    cout << IsNegative(1);
    cout << IsNegative(0);
    cout << IsNegative(-1);
}