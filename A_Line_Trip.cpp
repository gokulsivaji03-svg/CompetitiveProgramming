#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, x;
    cin >> n >> x;

    int tankSize = 0;
    int prev = 0;
    vector<int> fs(n);
    for(int i = 0; i < n; i++){
        cin >> fs[i];
        int diff = fs[i] - prev;
        tankSize = max(tankSize, diff);
        prev = fs[i];
    }
    tankSize = max(tankSize, ((x-fs[fs.size()-1])*2));
    cout << tankSize << endl;
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