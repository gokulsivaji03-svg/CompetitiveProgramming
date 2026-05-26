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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> numbers;
    int n,target;
    cin >> n >> target;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        numbers.push_back(temp);
    }
    int l = 0;
    int r = numbers.size()-1;
    vector<int> solution;

    while(l<r){
        if(numbers[l]+numbers[r] == target){
            solution.push_back(l+1);
            solution.push_back(r+1);
        }
        else if(numbers[l]+numbers[r]>target){
            r--;
        }
        else{
            l++;
        }
    }
    for(int i = 0; i < solution.size(); i++){
        cout << solution[i] << endl;
    }

    return 0;
}