#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &nums, int n)
{
    int result = 0;
    for(int i = 0; i<n; i++)
    {
        if(nums[i] == 1) continue;
        result += nums[i];
    }
    return (result + ((nums[n-1] == 1)? 1:0));
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