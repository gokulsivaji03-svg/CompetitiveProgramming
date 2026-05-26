#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    unordered_set<int> sol;
    string result = "no";
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        sol.insert(temp);
        if(sol.count(k)){
            result = "yes";
        }
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