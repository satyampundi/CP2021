
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}


pair<long long, long long> getMinMax(long long a[], int n) {
    ll mina=a[0];
    ll maxa=a[0];
    for(int i=1;i<n;i++)
    {
        maxa=max(maxa,a[i]);
        mina=min(mina,a[i]);
    }
    pair<ll,ll> ans;
    ans=make_pair(mina,maxa);
    return ans;
    
}
