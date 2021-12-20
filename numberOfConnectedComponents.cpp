// { Driver Code Starts
//Initial Template for C++
/*
most optimised solution
*/

#include <bits/stdc++.h>

using namespace std;

int arr[100001];
int rank1[100001];


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int find(int x,int arr[])
    {
        if(x==arr[x]) return x;
        return arr[x]=find(arr[x],arr);
    }
    //Function to merge two nodes a and b.
    void unionNodes( int a, int b, int arr[], int rank1[], int n) 
    {
        //code here
        int x=find(a,arr);
        int y=find(b,arr);
        if(x==y) return;
        else if(rank1[x]<rank1[y]) arr[x]=y;
        else if(rank1[y]<rank1[x]) arr[y]=x;
        else{
            arr[y]=x;
            rank1[x]++;
        }
    }
    
    //Function to determine number of connected components.
    int findNumberOfConnectedComponents( int n, int arr[], int rank1[]) 
    {
        //code here
        int ct=0;
        for(int i=1;i<=n;i++)
        {
            ct+=(arr[i]==i);
        }
        return ct;
    }
};

// { Driver Code Starts.



int main() {
    int t;
    cin>>t;

    while(t--) {
        
        //taking number of nodes
        int n;
        cin>>n;

        //initializing parent array and
        //rank array
        for(int i=1; i<=n; i++) {
            arr[i] = i;
            rank1[i] = 1;
        }

        //taking number of queries
        int q;
        cin>>q;
        Solution obj;
        while(q--) {
            int a,b;
            cin>>a>>b;
            
            //calling unionNodes() function
            obj.unionNodes(a,b, arr, rank1, n);
        }

        //calling function findNumberofConnectedComponents()
        cout<<obj.findNumberOfConnectedComponents(n, arr, rank1)<<endl;
    }
    return 0;
}  // } Driver Code Ends
