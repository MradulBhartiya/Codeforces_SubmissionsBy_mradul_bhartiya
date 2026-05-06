#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

int iterate(int idx,vector<int> &nums,vector<int> &freq)
{
    int res = 0;
    int x = idx;
    int n = nums.size();
    if(x == 0 || x == n-1) return 0;
    else
    {
        int l = x -1;
        int r = x + 1;
        while(l >= 0 && r <= n-1)
        {
            if(nums[l] == nums[r])
            {
                freq[nums[l]] = 1;
            }
            else break;
            l--,r++;
        }
    }
    for(int i = 1; i<n/2; i++)
        if(freq[i] == 0)
        {
            res = max(res,i);
            break;
        }

    return res;
}
int solve(vector<int> &nums)
{
    int n = nums.size();
    vector<int> zeros; 
    for(int i = 0; i<n; i++)
        if(nums[i] == 0) 
            zeros.push_back(i);

    if(zeros.size() < 2) return 0;
    int mex = 0;

    //Case 1
    vector<int> freq(n/2,0);
    mex = max(mex,iterate(zeros[0],nums,freq));
    
    //Case 2
    freq = vector<int> (n/2,0);
    mex = max(mex,iterate(zeros[1],nums,freq));

    //Case 3
    freq = vector<int> (n/2,0);
    int l = zeros[0],r = zeros[1];
    while(l < r)
    {
        if(nums[l] == nums[r])
        {
            freq[nums[l]] = 1;
            l++,r--;
        }
        else break;
    }
    if(l == r || abs(r - l) == 1)
    {
        l = zeros[0];
        r = zeros[1];
        while(l >= 0 && r <= n-1)
        {
            if(nums[l] == nums[r])
            {
                freq[nums[l]] = 1;
            }
            else break;
            l--,r++;
        }

        for(int i = 1; i<n/2; i++)
        {
            if(freq[i] == 0) 
            {
                mex = max(mex,i);
                break;
            }
        }
    }

    return mex;

}

int main()
{
    int testcase;
    cin>> testcase;
    
    for(int i = 0; i<testcase; i++)
    {
        int n;
        cin>>n;
        
        vector<int> nums(2*n);
        for(int i = 0; i<2*n; i++)
        {
            cin>>nums[i];
        }
        cout<<solve(nums)<<endl;
    }
    return 0;
}