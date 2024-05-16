#include <iostream>

using namespace std;

int BasicAtoi(string s){
    int res{0};
    for (int i{0}; i<s.length();i++){
        char startRune = '0';
        int range {s[i]-startRune};
        int count{0};
        for (int j{0};j<range;j++){
            count ++;
        }
        res = res * 10 + count;
    }
    return res;
}

int main(){
    cout<<BasicAtoi("4567")<<endl;
    return 0;
}