#include <bits/stdc++.h>
using namespace std;

vector<string> solve(int n) {
    if(n == 1) {
        return {"0", "1"};
    }
    vector<string> prev = solve(n - 1);
    vector<string> v = prev;
    reverse(prev.begin(), prev.end());
    
}