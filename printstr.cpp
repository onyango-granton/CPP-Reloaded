#include <iostream>

using namespace std;

void PrintStr(string s){
    for(int i{0}; i < s.length();i++){
        cout<<s[i];
    }
    cout <<endl;
}

int main(){
    PrintStr("Hello World!");
    return 0;
}