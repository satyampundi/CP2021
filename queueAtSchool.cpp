#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,k;
    cin>>n>>k;
    vector<char> v;
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        v.push_back(x);
    }
    while(k--){
    for(int j=0;j<n-1;j++)
    {

        if(v[j]-'a'<v[j+1]-'a'){
        swap(v[j],v[j+1]);
        j++;
        }
    }
    }
    for(auto x:v)
    {
        cout<<x;
    }
}
