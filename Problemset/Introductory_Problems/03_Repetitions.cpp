#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size();
    if(n == 1) {
        cout << 1 << "\n";
        return;
    }
    int ans = 1, current = 1;
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == s[i + 1]) {
            current++;
            ans = max(ans, current);
        }
        else current = 1;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}