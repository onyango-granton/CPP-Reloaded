#include "printchar.h"
#include <iostream>

using namespace std;

void PrintStr(string s){
    for(int i{0}; i < s.length();i++){
        Printchar(s[i]);
    }
    Printchar('\n');
}

int main(){
    PrintStr("Hello World!");
    return 0;
}