#include <iostream>
#include <string.h>

// template<typename T>
// char numofElemArray(T){
//     int arraySize = sizeof(T);
//     return arraySize;
// }

// int main() {
//     int indexes[] = {3,7,9,2,4,6};
//     std::string names[] = {"Hamsis","Dihab","Nile","yusuf"};
//     std::cout<<numofElemArray(indexes)<<std::endl;
//     std::cout<<sizeof(indexes)<<std::endl;
//     // std::cout<<numofElemArray(names)<<std::endl;

// // }

// using namespace std;

// template <typename T>
// int numOfElem(T arr){
//     int arrSize =  sizeof(arr) / sizeof(arr[0]);
//     cout<<sizeof(arr)<<" "<<*arr<<endl;
//     cout<<sizeof(arr[0])<<endl;
//     for (int i: arr){
//         cout << i << "\n";
//     }
//     return arrSize;
// }

// int main() {
//     int indexes[] = {3,7,9,2,4,6};
//     cout << numOfElem(indexes);
// }

using namespace std;

template<typename T>
T numOfElem(T arr[]){
    int sizeArr = sizeof(*arr) / sizeof(arr[0]);
    return sizeof(arr);
}

int main() {
    int indexes[] = {9,7,3,9,5};
    int sizeOfArr = sizeof(*indexes) / sizeof(indexes[0]);
    cout<<numOfElem<int>(indexes)<<endl;
    cout<<sizeOfArr<<endl;
}