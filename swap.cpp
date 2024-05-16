#include <iostream>

void Swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a {24};
    int b {30};
    Swap(&a,&b);
    std::cout <<"a"<<a<<std::endl;
    std::cout <<"b"<<b<<std::endl;
    return 0;
}