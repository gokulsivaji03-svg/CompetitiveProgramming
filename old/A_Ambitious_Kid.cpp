#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n);
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        ans = min(ans, abs(v[i]));
    }
    cout << ans << "\n";

    return 0;
}