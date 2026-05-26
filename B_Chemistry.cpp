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

    for(const auto& [c, i] : freq){
        if(i%2!=0 && i)
    }

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