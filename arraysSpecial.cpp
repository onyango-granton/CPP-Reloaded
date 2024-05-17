#include <iostream>
#include <string>

using namespace std;

int main() {
    string cars[5] = {"Volvo","Merce","Porsche","Bently"};
    for (string i: cars){
        cout << i<< endl;
    }

    //SizeofFunction
    //returns in bytes size of
    cout<<sizeof("cars");

}