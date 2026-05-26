#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n; cin >> n;
    
    vector<ll>a_Vec(n);
    vector<ll>b_Vec(n);
    ll sum = 0;
    for(ll i = 0; i < n; i++) cin >> a_Vec[i];
    for(ll i = 0; i < n; i++) cin >> b_Vec[i];

    ll a_Max = 0;
    for(ll i = 0; i < n; i ++){
        if(a_Vec[i]>b_Vec[i]){
            swap(a_Vec[i],b_Vec[i]);
        }
        sum += b_Vec[i];
        a_Max = max(a_Max, a_Vec[i]);
    }
    cout << sum + a_Max << endl;
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