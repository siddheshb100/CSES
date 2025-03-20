#include <iostream>
#include <vector>
#include <unordered_map>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    long long n, x;
    std::cin >> n >> x;
    std::vector<long long> v(n);
    for(long long i = 0; i < n; i++) std::cin >> v[i];
    std::unordered_map<long long, long long> m;
    for(long long i = 0; i < n; i++) {
        long long need = x - v[i];
        if(m.find(need) != m.end()) {
            std::cout << m[need] + 1 << ' ' << i + 1 << '\n';
            return 0;
        }
        m[v[i]] = i;
    }
    std::cout << "IMPOSSIBLE\n";
    return 0;
}