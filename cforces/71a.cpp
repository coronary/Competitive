#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    int cases;
    cin >> cases;
    while(cases--){
        cin >> input;
        if (input.size() > 10){
            cout << input[0] << input.size()-2 << input[input.size()-1] << endl;
        }else {
            cout << input << endl;
        }

    }

}
