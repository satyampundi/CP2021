#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long int max(long long int a,long long int b)
    {
        return a>b?a:b;
    }
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long int cs,ms;
        cs=ms=arr[0];
        for(int i=1;i<n;i++)
        {
            int a=arr[i];
            cs=max(a,cs+a);
            ms=max(cs,ms);
        }
        if(ms<0)
        return -1;
        
        return ms;
        
    }
};



int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  
