/* https://cses.fi/problemset/task/1068
 * Hint: Gauss' story
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

int solve() {
    int n;
    std::cin >> n;
    i64 sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        int x;
        std::cin >> x;
        sum += x;
    }
    return (1LL + n) * n / 2 - sum;
}

int main() {
    fast_io();
    std::cout << solve() << "\n";
    return 0;
}
