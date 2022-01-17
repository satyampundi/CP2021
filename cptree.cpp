#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

using namespace std;

void addEdge(vector <pair<int, int> > adj[], int u,int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}


int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<pair<int, int> > adj[n+1];
        for(int i=0;i<n-1;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            addEdge(adj, x, y, z);
        }
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            cout<<adj[x][0].first<<" "<<adj[x][0].second<<" ";
            cout<<adj[y][0].first<<" "<<adj[y][0].second;
        }
    }
    return 0;
}
