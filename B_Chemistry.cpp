#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    unordered_map<char, int> freq;
    for(char c : s){
        freq[c]++;
    }
    for(const auto& [nums, counter] : freq){
        if(counter%2!=0 && counter-k>1){
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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