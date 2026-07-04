#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        string s;
        cin>>s;
        string result;
        for(int i = 1; i<x; i++)
        {
            while(i < x && s[i-1] == s[i])  
            {
                i++;
            }
            result.push_back(s[i-1]);
        }
        int n = result.size();
        if(s[x-1] != result[n-1])
        {
            result.push_back(s[x-1]);
        }
        if(result.size() > 2)
            cout<<1<<endl;
        else 
            cout<<result.size()<<endl;
    }
    return 0;
}