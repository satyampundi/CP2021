#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> boat(n);
    for(int i=0;i<n;i++) cin>>boat[i];
    
    sort(boat.begin(),boat.end());
    
    int ans=0;
    
    for(int i=2;i<=2*n;i++)
    {
        int l=0;
        int r=n-1;
        int ct=0;
        while(l<r)
        {
            if(boat[l]+boat[r]==i) {
                ct++;
                l++;
                r--;
            }
            else if(boat[l]+boat[r]<i)
            {
                l++;
            }
            else
            {
                r--;
            }
            
        }
        if(ans<ct) ans=ct;
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
