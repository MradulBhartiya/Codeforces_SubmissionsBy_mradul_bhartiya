#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int testcase;
    cin>> testcase;
    
    for(int i = 0; i<testcase; i++)
    {
        int n;
        cin>>n;
        int open = 0, close = 0;
        for(int i = 0; i<n; i++)
        {
            char x;
            cin>>x;
            if(x == '(') open++;
            else close++;  
        }
        if(open == close)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}