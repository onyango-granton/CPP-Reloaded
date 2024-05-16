#include <iostream>

using namespace std;

int BasicAtoi2(string s){
    for (int i {0}; i < s.length(); i++){
        if (s[i] < '0' || s[i] > '9'){
            return 0;
        }
    }

    int res {0};
    for (int i{0}; i < s.length(); i++){
        char startChar = '0';
        int range = s[i] - startChar;
        int count {0};
        for (int j{0}; j < range; j++){
            count ++;
        }
        res = res * 10 + count;
    }
    return res;
}

int main(){
    cout<<BasicAtoi2("3452")<<endl;
}