#include<iostream>
#include<vector>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int k;
    cin>>k;

    string s(n,0);
    for(int i = 0; i<n; i++)
    {   
        cin>>s[i];
    }
    for(int i = 0; i<n-k; i++)
    {
        if((i == i+k) && (s[i] == '1'))
        {
            cout<<"NO"<<endl;
            return;
        }
        if(s[i] != s[i+k]) 
        {
            cout<<"NO"<<endl;
            return; 
        }
    }
    cout<<"YES"<<endl;
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}