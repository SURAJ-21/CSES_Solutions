#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n;cin>>n;
    ll a[n];ll i,c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=0&&a[i]<a[i-1])
        {
        c+=(a[i-1]-a[i]);
        a[i]=a[i-1];
        }
        
    }
    cout<<c;
}