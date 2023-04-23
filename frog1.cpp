#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>ston;
    int ar[100005];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        ston.push_back(x);
    }
    ar[0]=0;
    ar[1] = abs(ston[1] - ston[0]);
    if(n>2)
    {
        for(int i=2; i<n; i++)
        {
            ar[i] = min(ar[i-1] + abs( ston[i] - ston[i-1]),ar[i-2] + abs(ston[i] - ston[i-2]));
        }
    }
        cout<<ar[n-1];
    return 0;
}
