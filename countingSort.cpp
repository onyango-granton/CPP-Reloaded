#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::vector<int> items = {7,2,4,5,1,10,9};

    int length = items.size();

    std::vector<int> itemsCount(length);

    for (int i {0}; i < length; i++){
        itemsCount[i] = items[i];
    }

    int max = INT16_MIN;
    int min = INT16_MAX;

    for (int i{0}; i < length; i++){
        if (itemsCount[i] > max){
            max = itemsCount[i];
        }
        if (itemsCount[i] < min){
            min = itemsCount[i];
        }
    }

    // cout<<min<<endl;
    // cout<<max<<endl;

    std::vector<int> countArr(max-min + 1);

    for (int i{0}; i < length;i++){
        countArr[itemsCount[i]]++;
    }

    int total {0};

    for (int i{0}; i < countArr.size();i++){
        int subTotal = countArr[i];
        countArr[i] = total;
        total = total + subTotal;
    }

    for (int i{0}; i < length; i++){
        itemsCount[countArr[items[i]-min]] = items[i];
        countArr[items[i]-min]++;
    }

    for (int i{0}; i < length ;i++){
        cout<<itemsCount[i]<<endl;
    }


    return 0;
}