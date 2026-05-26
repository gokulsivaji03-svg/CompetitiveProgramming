#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<char, int> sol = {
        {'a', 2}, {'b', 2}, {'c', 2},
        {'d', 3}, {'e', 3}, {'f', 3},
        {'g', 4}, {'h', 4}, {'i', 4},
        {'j', 5}, {'k', 5}, {'l', 5},
        {'m', 6}, {'n', 6}, {'o', 6},
        {'p', 7}, {'q', 7}, {'r', 7}, {'s', 7},
        {'t', 8}, {'u', 8}, {'v', 8},
        {'w', 9}, {'x', 9}, {'y', 9}, {'z', 9}
    };

    int n; cin >> n;
    vector<string>v(n);
    vector<int> ans;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        ans.push_back(sol[v[i][0]]);
    };


    for(int x : ans) cout << x;

    return 0;
}