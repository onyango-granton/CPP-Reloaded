#include <iostream>
#include <vector>

using namespace std;


std::vector<int> CountingSortAlgo(std::vector<int> arr){
    int length = arr.size();

    std::vector<int> items(length);

    for (int i{0}; i<length;i++){
        items[i] = arr[i];
    }

    int max = INT16_MIN;
    int min = INT16_MAX;

    for (int i{0}; i < length; i++){
        if (items[i]> max){
            max = items[i];
        }
        if (items[i]<min){
            min = items[i];
        }
    }

    std::vector<int> count(max - min + 1);

    
    for (int i{0}; i < length;i++){
        count[items[i]-min]++;
    }

    // for (int i{0}; i<count.size();i++){
    //     cout<<count[i]<<endl;
    // }

    int total = 0;

    for (int i {0}; i < count.size(); i++){
        int subtotal = count[i];
        count[i] = total;
        total = total + subtotal;
    }

    for (int i{0}; i < length; i++){
        items[count[arr[i]-min]] = arr[i];
        count[arr[i]-min]++;
    }

    // for (int i{0}; i<length;i++){
    //     cout<<items[i]<<endl;
    // }

    return items;
}



int main() {
    // std::vector<int> items = {7,2,4,5,1,10,9};

    // int length = items.size();

    // std::vector<int> itemsCount(length);

    // for (int i {0}; i < length; i++){
    //     itemsCount[i] = items[i];
    // }

    // int max = INT16_MIN;
    // int min = INT16_MAX;

    // for (int i{0}; i < length; i++){
    //     if (itemsCount[i] > max){
    //         max = itemsCount[i];
    //     }
    //     if (itemsCount[i] < min){
    //         min = itemsCount[i];
    //     }
    // }

    // // cout<<min<<endl;
    // // cout<<max<<endl;

    // std::vector<int> countArr(max-min + 1);

    // for (int i{0}; i < length;i++){
    //     countArr[itemsCount[i]-min]++;
    // }

    // // for (int i {0}; i<countArr.size();i++){
    // //     cout<<countArr[i]<<endl;
    // // }

    // int total {0};

    // for (int i{0}; i < countArr.size();i++){
    //     int subTotal = countArr[i];
    //     countArr[i] = total;
    //     total = total + subTotal;
    // }

    // // for (int i {0}; i<countArr.size();i++){
    // //     cout<<countArr[i]<<endl;
    // // }

    // for (int i{0}; i < length; i++){
    //     itemsCount[countArr[items[i]-min]] = items[i];
    //     countArr[items[i]-min]++;
    // }

    // for (int i{0}; i < length ;i++){
    //     cout<<itemsCount[i]<<endl;
    // }

    std::vector<int> items = {7,2,4,5,1,10,9};

    std::vector<int> res = CountingSortAlgo(items);

    for (int i{0}; i < res.size() ;i++){
        cout<<res[i]<<endl;
    }


    return 0;
}