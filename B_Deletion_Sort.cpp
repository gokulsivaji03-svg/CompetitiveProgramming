#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];

    if(n==1){
        cout << 1 << "\n";
        return;
    }

    int result = 2;
    int prev = v[0];
    for(int i = 1; i < n; i++){
        if(prev>v[i]){ 
            result = 1;
        }
        prev = v[i];
    }
    cout << result << "\n";
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