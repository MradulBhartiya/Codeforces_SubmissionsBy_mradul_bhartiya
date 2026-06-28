#include <bits/stdc++.h>
using namespace std;
int input,N;
int main(){
    cin>>input;
    while(input--)
    {
        cin>>N;
        vector<int>nums(N);
        for(int &i :nums) cin>>i;

        sort(nums.begin(),nums.end());
        int a=0,b=0;
        for(int x:nums){
            a+=(x<nums[N/2]);
            b+=(x>nums[N/2]);
        }
        cout<<max(a,b)<<'\n';
    }
    return 0;
}