/**
    author:  UG_BEAST
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const ll mod = 1e9 + 7;

#define fr(i, n) for (ll i = 0; i < n; ++i)
#define all(v) v.begin(), v.end()
#define pb push_back

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    fr(i, n) cin >> a[i];


}

int main() {
    fastio();

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
#endif

    int t = 1;
    cin >> t;

    for (int tc = 1; tc <= t; tc++) {
        cout << "Case #" << tc << ": ";
        solve();
        cout << '\n';
    }

    return 0;
}