#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,k,s=0,i;
    cin>>n;
    long long int a[n-1];
    for(i=0;i<n-1;i++)
    {
        cin>>k;
        if(i==0)
        a[i]=k;
        else
        a[i]=k+a[i-1];
    }
    s=(n*(n+1))/2;
    cout<<(s-a[n-2])<<" ";
}