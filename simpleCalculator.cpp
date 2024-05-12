#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    string operation;
    cout <<"Enter First Number: ";
    cin >> num1;
    cout << "Select Operation: ";
    cin >> operation;
    cout << "Enter Second Number: ";
    cin >> num2;

    if (operation == "+"){
        cout << "Result: " << num1 + num2<<endl;
    } else if (operation == "-"){
        cout << "Result: " << num1 - num2<<endl;
    } else if (operation == "*"){
        cout << "Result: " << num1 * num2<<endl;
    } else if (operation == "/"){
        cout << "Result: " << num1 / num2<<endl;
    } else {
        cout << "Invalid Operation \""<< operation<<"\""<<endl;
    }

    return 0;
}