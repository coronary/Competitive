#include <bits/stdc++.h>

using namespace std;

int main() {
    string x;
    //vector<char> s;
    char vowels[] = "aeiouyAEIOUY";
    cin >> x;
    for(char i:x) {
        if(strchr(vowels, i) == NULL){
            cout << '.';
            if(isupper(i)) i = tolower(i);
            cout << i;
        }
    }
}
