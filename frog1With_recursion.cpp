#include<bits/stdc++.h>
using namespace std;
vector<int>ston;
int dp[100005];
int solv( int n)
{

// base case
    if(n == 0)return 0;
    if(n == 1)return abs(ston[1]-ston[0]);
// if the current state is solve then return the result
    if(dp[n]!=-1) return dp[n];

// solve the current state
    int ans1 = solv(n-1)+ abs(ston[n]-ston[n-1]);
    int ans2 = solv(n-2)+ abs(ston[n]-ston[n-2]);
    int ans =min(ans1,ans2);
    dp[n]=ans;
    return ans;





}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)dp[i]=-1;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        ston.push_back(x);
    }
    cout<<solv(n -1);
    return 0;
}
