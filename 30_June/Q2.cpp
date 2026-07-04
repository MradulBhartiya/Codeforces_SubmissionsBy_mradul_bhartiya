#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int x;
        cin>>x;
        int digits = (x == 0) ? 1 : (int)log10(x) + 1;
        long long result = llround(pow(10, digits)) + 1;
        cout<<result<<endl;
    }
    return 0;
}