#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
	int n,m;
	cin>>n>>m;
	vector<vector<int>> matrix(n,vector<int>(m));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>matrix[i][j];
		}
	}
	int t;
	cin>>t;
	while(t--)
	{
		int target;
		cin>>target;
		 int start = 0;
		int end = (n*m-1);
		int mid;
		bool flag=false;
		while(start<=end){
			mid = start +(end -start)/2;
			int element = matrix[mid/m][mid%m];
			if( element == target){
				flag=true;
				break;
			}
			if(element < target){
				start = mid +1;
			}
			if(element > target){
				end = mid -1;
			}
		}
		if(flag)
		{
			cout<<"true\n";
		}
		else
		{
			cout<<"false\n";
		}
	}
	
    return 0;
}
