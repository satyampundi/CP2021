#include <bits/stdc++.h>
using namespace std;
using ll =long long int;

int main() {
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        ll a=r;
        ll b=l;
        ll cti=0;
        ll ct=0;
        for(ll i=l+1;i<=r;i++)
        {
            if((b&i)==0)
            {
                cti++;
                continue;
            }
            b&=i;
        }
        for(ll i=r-1;i>=l;i--)
        {
            if((a&i)==0)
            {
                ct++;
                continue;
            }
            a&=i;
        }
        if(ct<cti)
        cout<<ct<<endl;
        else
        cout<<cti<<endl;
    }
}
