#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    cout << n << " ";
    while(n > 1) {
        if(n & 1) n = n * 3 + 1;
        else n = n >> 1;
        cout << n << " ";
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; 
    // cin >> t;
    while(t--) solve();
    return 0;
}