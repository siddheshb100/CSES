#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ans = 0;
int n = 0;
void solve(){
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 1; i < n; i++) {
        if(a[i] < a[i - 1]) {
            ans += a[i - 1] - a[i];
            a[i] = a[i - 1];
        } 
    }
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    // int t = 1; 
    // cin >> t;
    // while(t--) 
    solve();
    return 0;
}