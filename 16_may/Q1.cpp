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
    int zero = 0,one = 0, two  = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x == 0) zero++;
        else if(x == 1) one++;
        else if(x == 2) two++;
        
    }
    int pairs = min(one,two);
    int result = zero + pairs + (two - pairs)/3 + (one - pairs)/3;
    cout<<result<<endl;
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
