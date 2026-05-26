#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int x, y; cin >> x >> y;
    string a, b; cin >> a >> b;
    
    if(a.find(b)!=string::npos){
        cout << 0 << "\n";
        return;
    }
    else{
        for(int i = 0; i < 5; i++){
            a+=a;
            if(a.find(b)!=string::npos){
                    cout << i+1 << "\n";
                return;
            }
        }
    }
    cout << -1 << "\n";
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