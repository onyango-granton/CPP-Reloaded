#include <iostream>
#include <vector>

using namespace std;

// int* SortIntegerTable(int table[]){
//     for (int i{0}; i < sizeof(*table);i++){
//         for (int j{0}; j<sizeof(*table);j++){
//             if (j+1 < sizeof(*table) && table[j] > table[j+1]){
//                 table[j], table[j+1] = table[j+1], table[j];
//             }
//         }
//     }
//     // std::cout<<*table;
//     for (int i{0}; i < sizeof(*table);i++){
//         std::cout<<table[i]<<std::endl;
//     }
//     // cout<<table<<endl;
//     return table;
// }

// int main() {
//     std::vector<int> myints
// }

std::vector<int> SortIntegerTable(std::vector<int> table){
    for (int i{0};i<table.size();i++){
        for (int j{0}; j<table.size();j++){
            if (j+1 < table.size() && table[j] > table[j+1]){
                // cout<<table[j]<<"Here"<<endl;
                int tmp = table[j];
                table[j] = table[j+1];
                table[j+1] = tmp;
            }
        }
    }
    for (auto i: table){
        cout <<i<<" indexed"<<endl;
    }
    return table;
}

int main(){
    std::vector<int> indexes = {4,8,3,2,66,4,3};
    std::vector<int> sortedInt = SortIntegerTable(indexes);

    for (auto i : sortedInt){
        cout<<i<<endl;
    }
}