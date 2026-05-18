#include <bits/stdc++.h>
using namespace std;

//Using typefef
typedef long long ll;
typedef vector<long long> vl;
typedef vector<bool> vb;

//fast shorthad for loops and sorting
#define all(v) v.begin() + 1,v.end()
// Fast I/O is crucial for large array inputs
void fast_io() {
    ios_base::sync_with_stdio(false);x  
    cin.tie(NULL);
}

int mex(vb & mex_arr,int Mex)
{
    for(int i = Mex +1; i < mex_arr.size(); i++)
    {
        if(mex_arr[i] == false) return i;
    }
    return 0;
}
void solve()
{
    int n;
    if(!(cin>>n)) return;

    vl nums(n);
    int idx = 0;
    ll Max = 0;
    for(int i = 0; i<n; i++)
    {
        cin>> nums[i];
        if(nums[i] > Max)
        {
            Max = nums[i];
            idx = i;
        }
    }

    if(idx != 0) swap(nums[0],nums[idx]);
    sort(all(nums));
    
    ll result = 0;
    int Mex = 0;
    vb mex_arr(n+1,false);
    for(int i = 0; i<n; i++)
    {
        if(nums[i] < n)
        {
            mex_arr[nums[i]] = true;
            if(nums[i] == Mex) Mex = mex(mex_arr,Mex);
        } 

        result += Mex + Max;
    }
    cout<<result<<endl;
}

int main()
{
    fast_io();

    int t;
    cin>>t;
    while(t--) solve();

    return 0; 
}