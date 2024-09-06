#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define int long long
#define pl pair<int, int>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()

void f() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int res = 0;

  map<int, unordered_set<int>> cs;
  for (int i = 0; i < n; i++) {

    for (auto const &[k, v] : cs) {
      if (k >= a[i])
        break;
      if (v.find(i - (a[i] - k)) != v.end()) {
        res++;
      }
    }

    if (cs.find(a[i]) == cs.end()) {
      unordered_set<int> s = {i};
      cs[a[i]] = s;
    } else
      cs[a[i]].insert(i);
  }

  // for (auto const &[k, v] : cs) {
  //   cout << k << " -> ";
  //   for (auto const i : v) {
  //     cout << i << " ";
  //   }
  //   cout << "\n";
  // }

  cout << res << "\n";
}

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int t = 1;
  cin >> t;
  while (t--)
    f();
  return 0;
}
