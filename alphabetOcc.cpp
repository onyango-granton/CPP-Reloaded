#include <iostream>
#include <map>
#include <string>

using namespace std;

void AlphaInString(){
    map<char, int> mp;
    string s1 {"Hello world"};
    for (char ch{'a'}; ch <= 'z';ch++){
        int count = 0;
        for (int i{0}; i < s1.length();i++){
            if (ch == s1[i]){
                count++;
            }
        }
        // cout << count;
        mp[ch] = count; 
    }

    for (char ch{'A'}; ch <= 'Z';ch++){
        int count = 0;
        for (int i{0}; i < s1.length();i++){
            if (ch == s1[i]){
                count++;
            }
        }
        // cout << count;
        mp[ch] = count; 
    }

    // cout << mp.begin()->second;

    map<char, int>::iterator it = mp.begin();

    while (it != mp.end()){
        if (it->second > 0){
            cout << it -> first <<" appeared "
            <<it -> second<<" times"<<endl;
        }
        it++;
        // cout << "Key:" << it->first
        // <<", Value: "<< it->second<< endl;
        // it++;

    }

}

int main(){
    AlphaInString();
    return 0;
}