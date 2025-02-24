#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int a[N];
int temp;
int x;
void solve(){
    cin >> x;
    for(int i = 0; i < x - 1; i++) {
        cin >> temp;
        a[temp] = 1;      
    }    
    for(int i = 1; i <= x; i++) {
        if(a[i] == 0) {
            cout << i << "\n";
            break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int t = 1; 
    // cin >> t;
    while(t--) solve();
    return 0;
}