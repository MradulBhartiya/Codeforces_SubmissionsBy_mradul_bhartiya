#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solve(int n,vector<int> &nums)
{
    int count = 0;
    for(int i = 0; i<n-1; i++)
    {
        int diff = abs(nums[i] - nums[i+1]);
        int g = __gcd(nums[i],nums[i+1]);

        if(diff == g) count++;
    }
    return count;
}
int main()
{
    int testcase;
    cin>>testcase;
    for(int i = 0; i<testcase; i++)
    {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i = 0; i<n; i++)
        {
            int x;
            cin>>x;
            nums[i] = x;
        }
        cout<<solve(n,nums)<<endl;
    }
    return 0;
}