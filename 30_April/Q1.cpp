#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int testcase;
    cin>> testcase;
    
    for(int i = 0; i<testcase; i++)
    {
        int a;
        cin>>a;
        int b;
        cin>>b;
        if(a%2 != 0 && b%2 !=  0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}