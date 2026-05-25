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
    if (!(cin >> n)) return;
    
    // Use vector for dynamic arrays to avoid stack overflow with large N
    vi a(n),b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i<n; i++)
    {
        cin>> b[i];
    }
    long long ans = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] > b[i]) swap(a[i],b[i]);
        ans += b[i];
    }
    int x = *max_element(a.begin(),a.end());
    cout<<ans+x<<endl;
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