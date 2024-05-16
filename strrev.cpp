#include <iostream>
#include "printchar.h"

std::string StrRev(std::string s) {
    std::string res = "";
    for (int i = s.length()-1; i >= 0;i--){
        res = res + s[i];
    }
    return res;
}

int main() {
    std::string inverse = StrRev("hELLO World");
    for (int i{0}; i < inverse.length(); i++){
        PrintChar(inverse[i]);
    }
    PrintChar('\n');
    return 0;
}