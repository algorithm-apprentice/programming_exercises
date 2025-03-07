/* https://cses.fi/problemset/task/1094
 * Hint: just record the maximum number.
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

i64 solve() {
    int n;
    std::cin >> n;
    i64 ans = 0;
    int maximum = 0;
    while (n--) {
        int x;
        std::cin >> x;
        if (x < maximum) {
            ans += maximum - x;
        } else {
            maximum = x;
        }
    }
    return ans;
}

int main() {
    fast_io();
    std::cout << solve() << "\n";
    return 0;
}