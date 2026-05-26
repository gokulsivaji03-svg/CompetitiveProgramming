#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n; cin >> n;
    unordered_map<int, int> map;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        map[temp]++;
    }
    if(n<3){
        cout << "Yes" << endl;
        return;
    }
    for(const auto& [nums, c]: map){
        v.push_back(c);
    }
    if(v.size()>2){
        cout << "No" << "\n";
        return;
    }
    sort(v.begin(), v.end(), greater<int>());

    if(v.size()==1){
        cout << "Yes" << endl;
        return;
    }
    else{
        if(n%2==0){
            if(v[0]==n/2){
                cout << "Yes" << endl;
                return;
            }
            else{
                cout << "No" << endl;
                return;
            }
        }
        else{
            if(v[0]==n/2+1){
                cout << "Yes" << endl;
                return;
                }
            else{
                cout << "No" << endl;
                return;
            }
        }
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