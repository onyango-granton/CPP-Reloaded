#include <iostream>

int* SortIntegerTable(int table[]){
    for (int i{0}; i < sizeof(*table);i++){
        for (int j{0}; j<sizeof(*table);j++){
            if (j+1 < sizeof(*table) && table[j] > table[j+1]){
                table[j], table[j+1] = table[j+1], table[j];
            }
        }
    }
    // std::cout<<*table;
    for (auto i: table){

    }
    return table;
}

int main() {
    int table[] = {2,7,4,5,9,15,10};
    SortIntegerTable(table);
    // std::cout<<*table<<std::endl;

    for (auto i: table){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}