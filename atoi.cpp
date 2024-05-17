#include <iostream>

using namespace std;

int Atoi(string s){
    bool isPositive {true};
    if (s[0] == '+' || s[0] == '-'){
        if (s[0] == '+'){
            isPositive;
        }
        if (s[0] == '-'){
            //cout<<"Here";
            isPositive = false;
        }
        s = s.substr(1,s.length()-1);
    }
    for (int i{0};i < s.length(); i++){
        if (s[i] < '0' || s[i] > '9' ){
            return 0;
        }
    }
    int res {0};
    for (int i{0};i < s.length();i++){
        char startChar = '0';
        int range = s[i] - startChar;
        int count {0};
        for (int j{0};j<range;j++){
            count ++;
        }
        res = res * 10 + count;
    }

    if (isPositive){
        res *= 1;
    }
    if (!isPositive){
        cout<<"Here";
        res *= -1;
    }

    return res;

}

int main() {
    cout<<Atoi("-65775")<<endl;
    return 0;
}