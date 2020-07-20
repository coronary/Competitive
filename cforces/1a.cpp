#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ll n, m, a, x, y;
    cin >> n >> m >> a;
    x = n%a==0?n/a:(n/a)+1;
    y = m%a==0?m/a:(m/a)+1;
    cout << x*y << endl;
}
