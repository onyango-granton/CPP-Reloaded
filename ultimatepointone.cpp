#include <iostream>

using namespace std;

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