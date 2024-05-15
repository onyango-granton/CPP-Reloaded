#include <iostream>

void UltimateDivMod(int* a, int* b){
    int div {*a / *b};
    int mod {*a % *b};
    *a = div;
    *b = mod;
}

int main() {
    int a {13};
    int b {2};
    UltimateDivMod(&a,&b);
    std::cout<<"Div: "<<a<<std::endl;
    std::cout<<"Mod: "<<b<<std::endl;

}