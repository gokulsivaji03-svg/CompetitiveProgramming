#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n-1);
    ll sum = 0;
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
        sum+= v[i];
    }
    cout << -1 * sum << "\n";
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