#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &nums,int n)
{
    int count = 0;
    long long sum = 0;
    for(int i = n-1 ; i >= 0; i--)
    {
        sum = max(1ll*nums[i],sum + nums[i]);
        if(sum > 0) count++;
        else sum = 0;
    }
    return count;
}
int main()
{
    int testcase;
    cin>> testcase;
    
    for(int i = 0; i<testcase; i++)
    {
        int n;
        cin>>n;
        
        vector<int> nums(n);
        for(int i = 0; i<n; i++)
        {
            int x;
            cin>> x;
            nums[i] = x;
        }
        cout<<solve(nums,n)<<endl;
    }
    return 0;
}