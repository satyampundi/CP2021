using namespace std;

#define ll long long 

int main() {
	//code
    int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll rev_arr[n];
	    
	    for(ll i=0;i<n;i++)
	    {
	        cin>>rev_arr[i];
	    }
	    
	    int l=0;
	    int r=n-1;
	    int temp=0;
	    while(l<r)
	    {
	        temp=rev_arr[l];
	        rev_arr[l]=rev_arr[r];
	        rev_arr[r]=temp;
	        l++;
	        r--;
	    }
	    
	    for(ll i=0;i<n;i++)
	    {
	        cout<<rev_arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
