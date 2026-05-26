#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, k, prev;
    cin >> n >> k;
    vector<int> nums(n);

    cin >> nums[0];
    prev = nums[0];
    int kCopy = k;
    string result = "YES";
    for(int i = 1; i<n; i++){
        cin >> nums[i];
        if(prev>=nums[i] && kCopy > 0){
            kCopy--;
        }
        if(prev<=nums[i]){
            kCopy = k;
        }
        if(kCopy==0){
            result = "NO";
        }
        prev = nums[i];
    }

    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}