#include<iostream>
using namespace std;
int main()
{
    int n,k,a[60],i,j=0;
    cout<<"value";
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
         j++;
        }
    }
    cout<<j;
    return 0;
}
