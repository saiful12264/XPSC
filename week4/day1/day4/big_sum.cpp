#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, s;
    cin >> n >> s;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long l = 0, sum = 0;
    long long ans = LLONG_MAX;

    for (long long r = 0; r < n; r++) {
        sum += v[r];
        while (sum >= s) {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }
    }

    if (ans != LLONG_MAX) {
        cout << ans ;
    } else {
        cout << -1 ;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
