#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll a;
    int n;

    cin >> a >> n;

    vector<int> d(n);

    for(int i = 0; i < n; i++)
        cin >> d[i];

    ll ans = LLONG_MAX;

    queue<ll> q;

    // number 0
    if(d[0] == 0)
    {
        ans = min(ans, a);
    }

    for(int x : d)
    {
        if(x != 0)
            q.push(x);
    }

    while(!q.empty())
    {
        ll curr = q.front();
        q.pop();

        ans = min(ans, llabs(a - curr));

        if(curr > (ll)1e17)
            continue;

        for(int x : d)
        {
            ll nxt = curr * 10 + x;

            if(nxt > (ll)1e18)
                continue;

            q.push(nxt);
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}