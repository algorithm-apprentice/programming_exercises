/* https://cses.fi/problemset/task/1068
 * Skills: simulation
 * Common mistakes: int overflow
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdint>
#include <queue>
#include <set>
#include <map>

typedef int64_t i64;
typedef uint64_t u64;

void fast_io() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
}

void debug(const auto &... x) {
#ifdef ONLINE_JUDGE
    return;
#endif
    ((std::cerr << x << ' '), ...);
    std::cerr << '\n';
}

void solve(i64 x) {
    while (x != 1) {
        std::cout << x << ' ';
        if (x % 2 == 0) {
            x /= 2;
        } else {
            x = 3 * x + 1;
        }
    }
    std::cout << 1 << '\n';
}

int main() {
    fast_io();
    int x;
    std::cin >> x;
    solve(x);
    return 0;
}
