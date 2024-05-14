#include <iostream>

using namespace std;

int PointOne(int* n){
    *n = 1;
    return *n;
}

int main() {
    int num {1};
    cout << PointOne(num);
    return 0;
}