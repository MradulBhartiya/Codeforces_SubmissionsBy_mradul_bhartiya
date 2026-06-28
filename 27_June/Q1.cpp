#include <bits/stdc++.h>
using namespace std;

// Faster typing with aliases
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// Fast shorthand for loops and sorting
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back

// Fast I/O is crucial for large array inputs
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    ll n ,k;
    cin>>n>>k;
    ll ans = 0;
    ll cost = 1;
    while(cost <= n)
    {
        ll take = min(k,n/cost);
        ans += take;
        n -= take*cost;
        cost <<= 1;
    }
    cout<<ans<<endl;
    return;
}

int main() {
    fast_io();
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
