#include <iostream>

using namespace std;

// PointOne takes a pointer to an integer
// Within the memory address it changes the data stored to 1
int PointOne(int* n){
    // Dereferencing
    *n = 1;
    return *n;
}

int main() {
    int num {1};
    cout << PointOne(&num)<<endl;
    return 0;
}