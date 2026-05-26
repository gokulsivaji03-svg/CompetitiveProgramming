#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <functional>
#include <utility>
#include <sstream>
#include <iomanip>
#include <complex>
#include <random>
#include <cassert>
#include <cstring>
using namespace std;

using ll = long long;

void solve() {
    int n;
    int oddStart = 3;
    int evenStart = 4;
    cin >> n;

    if(n == 1){
        cout << 1 << " " << 2 << " " << 3 << endl;
    }
    else{
        for(int i = 1; i < n*3; i++){
            if(n%2==0){
                cout << i << " ";
                cout << oddStart << " ";
                oddStart++;
                if(oddStart==n*3+1){
                    break;
                }
                cout << oddStart << " ";
                oddStart++;
                if(oddStart==n*3+1){
                    break;
                }
            }
            else{
                cout << i << " ";
                cout << evenStart << " ";
                evenStart++;
                if(evenStart==n*3+1){
                    break;
                }
                cout << evenStart << " ";
                evenStart++;
                if(evenStart==n*3+1){
                    break;
                }
                }
            }
        }
        cout << endl;    
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