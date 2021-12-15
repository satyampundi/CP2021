// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int j=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                j++;
                swap(&arr[j],&arr[i]);
            }
        }
        //reversing
        int pos=j+1;
        int r=pos+1;
        
        while(r<n)
        {
            swap(&arr[pos],&arr[r]);
            pos++;
            r++;
        }
        
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends
