#include<iostream>
#include<vector>
using namespace std;

int testcase,n;
int main()
{
    // Fast I/O optimization to prevent Time Limit Exceeded (TLE)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>testcase;
    while(testcase--) 
    {
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i<n; i++) cin>>a[i];

        vector<int> result(n);
        long long sum = 0;
        long long max_possible = 2e18;
        //main logic
        for(int i = 0; i<n; i++)
        {
            sum += a[i];
            long long curr_avg = sum/(i+1);
            max_possible = min(max_possible,curr_avg);
            result[i] = max_possible;
        }

        //Print result
        for(int i = 0; i<n; i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}