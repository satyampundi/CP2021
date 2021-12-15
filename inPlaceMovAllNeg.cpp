#include <bits/stdc++.h>
using namespace std;

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
        int ct=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                ct++;
            }
        }
        int arr_1[ct];
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                arr_1[k]=arr[i];
                k++;
            }
        }
        k=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                k++;
                swap(&arr[k],&arr[i]);
            }
        }
        
        for(int i=n-1, j=ct-1;i>=ct,j>=0;i--,j--)
        {
            arr[i]=arr_1[j];
        }
        
       
    }
};

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
