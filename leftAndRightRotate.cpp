#include <bits/stdc++.h>
using namespace std;

void rotateRight(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k%n);
        reverse(nums.begin() + k%n , nums.end());
    }
void rotateLeft(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin() , nums.begin() + (n - k%n));
        reverse(nums.begin() + (n - k%n ) , nums.end());
    }
void usingRotateStl(vector<int>& nums,int k)
{
  /* n->size of arr k-> num of rotations 
  Left Rotation : To rotate left,3 parameters 1:start 2:v.begin()+"number of left rotation" % n 3:v.end()
  Right Rotation : To rotate right,3 parameters 1:start 2:v.begin()+v.size()-"number of right rotation"% n 3:v.end()
  */
  int n = nums.size();
  rotate(nums.begin(),nums.begin()+k%n,nums.end());
  rotate(nums.begin(),nums.begin()+nums.size()-k%n,nums.end());
}
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
      int x; cin>>x;
      nums.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
      cout<<nums[i]<<"";
    }
    cout<<endl;
    
    rotateRight(nums,k);
    
    for(int i=0;i<n;i++)
    {
      cout<<nums[i]<<"";
    }
    cout<<endl;
    
    rotateLeft(nums,k);
    
    for(int i=0;i<n;i++)
    {
      cout<<nums[i]<<"";
    }
    cout<<endl;
  }
}
