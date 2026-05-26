#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    
    int counter = 0;
    int empc = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='.'){
            counter++;
            empc++;
        }
        else{
            counter = 0;
        }
        if(counter == 3){
            break;
        }
    }
    if(counter == 3){
        cout << counter-1 << endl;
    }
    else{
        cout << empc << endl;
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