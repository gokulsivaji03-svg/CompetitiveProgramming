#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    int l = INT_MAX;
    int h = 0;
    for(int i = 0; i < n; i ++){
        cin >> v[i];
        l = min(l, v[i]);
        h = max(h, v[i]);
    }
    cout << (h-l+1)/2 << endl;
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