#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
string S;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> S;

  ll b = 0;
  ll s = 0;
  ll a = 0;
  ll mx = 0;
  for (const auto& x : S) {
    if ('B' == x) {
      ++b;
      if (mx <= b) {
        mx = b;
      }
    }
    if ('S' == x) {
      ++s;
      if (mx <= s) {
        mx = s;
      }
    }
    if ('A' == x) {
      ++a;
      if (mx <= a) {
        mx = a;
      }
    }
  }

  if (b == s && b == a) {
    cout << "SCU";
    return 0;
  }

  if (mx == b) {
    cout << "B";
  }

  if (mx == s) {
    cout << "S";
  }

  if (mx == a) {
    cout << "A";
  }

  return 0;
}