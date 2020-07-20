#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases,num,person,cnt;
    bool trip = true;
    cin >> cases;
    for(int i=0;i<cases;i++){
        cin >> num;
        cnt = 5;
        trip = true;
        for(int j=0;j<num;j++){
            cin >> person;
            if(person == 1 && cnt > 4) cnt = 0;
            else if (person == 1 && cnt < 5) trip = false;
            else if (person == 0) cnt++;
        }
        string out = trip?"YES":"NO";
       cout << out << endl; 
    }

}
