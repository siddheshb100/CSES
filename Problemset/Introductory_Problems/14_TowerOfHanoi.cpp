#include <iostream>
#include <cmath>
using namespace std;
int n;

void fn(int n, int a, int c, int b) {
    if (n > 0) {
        fn(n - 1, a, b, c);
        cout << a << ' ' << c << '\n';
        fn(n - 1, b, c, a);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    cout << pow(2, n) - 1 << '\n';
    fn(n, 1, 3, 2);

    return 0;
}