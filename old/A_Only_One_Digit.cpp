#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string input;
    cin >> input;

    int y = INT_MAX;
    for(int i = 0; i < input.size(); i++){
        y = min(y, stoi(string(1, input[i])));
    }
    cout << y << endl;
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