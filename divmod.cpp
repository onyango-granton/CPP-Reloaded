#include <iostream>

using namespace std;

void DivMod(int a, int b, int* div, int* mod){
    *div = a / b;
    *mod = a % b;
}

int main() {
    int a{9};
    int b{2};
    int div = 0;
    int mod = 0;
    DivMod(a,b,&div,&mod);
    cout <<"Div: "<<div<<endl;
    cout <<"Mod: "<<mod<<endl;
    return 0;
}