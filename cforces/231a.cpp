#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum, fin, hold;
    cin >> n;
    sum = fin = 0;
    while(n--) {
        sum = 0;
        for(int i = 0; i < 3; i++) {
            cin >> hold;
            sum += hold;
            if (sum > 1){
                fin += 1;
                if (i < 2) cin >> hold;
                break;
            }
        }
    }
    cout << fin << endl;
    return 0;

}
