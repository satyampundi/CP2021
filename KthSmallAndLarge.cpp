#include <bits/stdc++.h>
using namespace std;
map<int,int> fq_arr; // ascending for kth smallest
map<int,int,greater<int>> fq_arr_l; //decending for kth largest
int solveKthSmall(int k)
{
    int fq=0;
    for(auto mp:fq_arr)
    {
        fq+=mp.second;
        if(fq>=k)
        {
            return mp.first;
        }
    }
    return -1;
}
int solveKthlarge(int k)
{
    int fq=0;
    for(auto mp:fq_arr_l)
    {
        fq+=mp.second;
        if(fq>=k)
        {
            return mp.first;
        }
    }
    return -1;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> input;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            input.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            fq_arr[input[i]]+=1;
            fq_arr_l[input[i]]+=1;
        }
        cout<<solveKthSmall(k)<<" ";
        cout<<solveKthlarge(k);
    }
    return 0;
}
