#include <iostream>
using namespace std;
int calculateSquare(int num)
{
    //    Write your code here.
    if(num<0)
        num= -num;
    int pos=0;
    int k=num;
    int res=0;
    while(k>0)
    {
        if((k&1))
        {
            res+=(num<<pos);
        }
        pos++;
        k>>=1;
    }
    return res;
}
int main() {
    int n;
    cin>>n;
    cout<<calculateSquare(n);
}
