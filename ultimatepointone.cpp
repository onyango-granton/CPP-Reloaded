#include <iostream>

using namespace std;

// Takes in a pointer to a pointer to a pointer
// Saves the data stored as 1
int UltimatePointOne(int*** num){
    ***num = 1;
    return ***num;
}

int main(){
    int a = 0;
    int* b {&a};
    int** c {&b};
    cout << UltimatePointOne(&c)<<endl;
}