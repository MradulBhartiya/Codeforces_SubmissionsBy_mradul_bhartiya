#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(__gcd(x,y) == y)
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }
    return 0;
}