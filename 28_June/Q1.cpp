#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Fast I/O is crucial for large array inputs
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    int n,c;
    cin>>n>>c;
    vector<int> a(n),b(n);
    for(int i = 0; i<n; i++)
        cin>>a[i];
    for(int i = 0; i<n; i++)
        cin>>b[i];

    //sidhi ubgli
    int cost = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] >= b[i]) cost += (a[i] - b[i]);
        else 
        {
            cost = INT_MAX;
            break;
        }
    }
    //thedi ungli
    int exp = c;
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    for(int i = 0; i<n; i++)
    {
        if(a[i] >= b[i]) exp += (a[i] - b[i]);
        else
        {
            exp = INT_MAX;
            break;
        }
    }
    int result = min(exp,cost);
    result = (result == INT_MAX)? -1: result;
    cout<<result<<endl;
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
