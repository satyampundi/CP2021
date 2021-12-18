#include <bits/stdc++.h>
using namespace std;

auto MEX_1(vector<int>& v,int n) //O(N) and O(N)
{
    vector<int> count(n,0);
    for(int i=0;i<n;i++)
    {
        if(v[i]>n)
        {
            continue;
        }        
        count[v[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(count[i]==0)
        {
            cout<<i<<endl;
            break;
        }
    }
}

auto MEX_2(vector<int> v/*pass as reference */,int n)// O(N) & O(1) not work on 0 in middle and -ve 
{
    for(int i=0;i<n;i++) 
    {
        if(v[i]>n)
        continue;        
        v[abs(v[i])]=-v[abs(v[i])];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>0)
        {
            cout<<i<<endl;
            break;
        }
        //cout<<v[i]<<" ";
    }
}

auto MEX_3(vector<int>& v,int n)// O(N) & O(1) & works on negative as well
{
    for(int i=0;i<n;i++)
    {
        if(v[i]==i && v[i]<0)
        {
            continue;
        }
        swap(v[v[i]],v[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]!=i)
        {
            cout<<i<<endl;
            break;
        }
    }
}


int main() {
    int n;
    cin>>n;
    vector<int> inp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        inp.push_back(x);
    }  
    MEX_1(inp,n);

    MEX_2(inp,n);

    MEX_3(inp,n);
    
}
