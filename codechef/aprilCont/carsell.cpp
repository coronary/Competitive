#include <bits/stdc++.h>

using namespace std;


int main() {
    int x,y,z,cnt,profit;
    cin >> x;
    for(int i = 0; i < x; i++) {
        cin >> y;
        int f[y];
        for(int j = 0;j<y;j++) {
            cin >> z;
            f[j] = z;
        }
        sort(f,f+y);
        cnt = profit = 0;
        for(const auto b:f) {
            if(b-(cnt) > 0) profit += b-(cnt++);
        }
        profit = profit%(10^9+7);
        cout << profit << endl;
    }

}
