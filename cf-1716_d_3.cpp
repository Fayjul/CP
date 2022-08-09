#include <bits/stdc++.h>

using namespace std;

const int MOD = 998244353;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> dp(n + 1), ans(n + 1);
  dp[0] = 1;
  for (int mn = 0; mn + k <= n; mn += k++) {
    vector<int> sum(k);
    cout << "for mn = " << mn << " " << endl;
    for (int i = mn; i <= n; ++i) {
      int cur = dp[i];
      cout << "here i = " << i << "  cue = " << cur << " dp[i] = " << dp[i] << endl;
      dp[i] = sum[i % k];
      (sum[i % k] += cur) %= MOD;
      (ans[i] += dp[i]) %= MOD;
      cout << "last sum[i%k] == " << sum[i%k] << " ans[i]" << ans[i] << endl;
    }
  }
  for (int i = 1; i <= n; ++i) cout << ans[i] << ' ';
}
