#include <iostream>

using namespace std;

void PrintNbr(int n){
    string res{""};
    while (n > 0){
        char startChar{'0'};
        int digit{n%10};
        for (int i = 0; i < digit; i++){
            startChar++;
        }
        res += char(startChar);
        n = n / 10;
    }

    // cout <<res;

    for (int i = res.length()-1; i >= 0; i-- ){
        cout<<res[i];
    }
    cout <<"\n";
}

int main() {
    PrintNbr(897);
    // cout<< 45 % 10;
    return 0;
}