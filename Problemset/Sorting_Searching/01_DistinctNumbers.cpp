#include <iostream>
#include <set>
using namespace std;

int x, n;
set<int> s;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }    
    cout << s.size() << "\n";
    return 0;
}