/*
 * https://cses.fi/problemset/task/1069/
 * Hint: simulation
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

int solve(const std::string &text) {
    int ans = 1;
    int count = 1;
    for (int i = 1; i < text.length(); ++i) {
        if (text[i] == text[i - 1]) {
            ++count;
            ans = std::max(ans, count);
        } else {
            count = 1;
        }
    }
    return ans;
}

int main() {
    fast_io();
    std::string text;
    std::cin >> text;
    std::cout << solve(text) << "\n";
    return 0;
}
