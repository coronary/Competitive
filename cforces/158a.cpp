#include <bits/stdc++.h>

using namespace std;

int main() {
    int x,y,z;
    vector<int> nums;
    cin >> x >> y;
    while(x--) {
        cin >> z;
        nums.push_back(z);
    }
    z = nums[y-1];
    y = 0;
    for(vector<int>::iterator ptr = nums.begin(); ptr < nums.end(); ptr++) {
        if (*ptr > 0 && *ptr >= z) y++;
    }
    cout << y << endl;
}
