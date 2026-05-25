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
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> ops;

    for (int i = 0; i < n - 1; i++) {

        bool s1 = (a[i] > 0);
        bool s2 = (a[i + 1] > 0);

        if (s1 != s2) {
            ops.push_back(i + 1);
        }
    }

    if (a[n - 1] > 0) {
        ops.push_back(n);
    }

    reverse(ops.begin(), ops.end());

    cout << ops.size() << endl;

    for (int x : ops) {
        cout << x << ' ';
    }

    cout << endl;
}

int main() {
    fast_io();
    int t = 1;
    // Standard Codeforces format: many problems use multiple test cases
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
