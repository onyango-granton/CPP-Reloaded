#include <iostream>
#include <map>
#include <string>

using namespace std;

void AlphaInString(){
    map<char, int> mp;
    string s1 {"Hello world"};
    for (char ch{'a'}; ch <= 'z';ch++){
        int count;
        for (int i{0}; i < s1.length();i++){
            if (ch == s1[i]){
                count++;
            }
        }
        mp[ch] = count; 
    }
    map<char, int>::iterator it = mp.begin();

    while (it !=)

}

int main(){
    return 0;
}