#include<bits/stdc++.h>
#define ll  long long int 
#define ld  long long double 
const ll N=1e9+7;
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);cout.tie(0);
 ll n,i;cin>>n;
 if(n%4==0)
 {
    cout<<"YES\n";
    cout<<n/2<<"\n";
    for(i=1;i<=n/4;i++)
    cout<<i<<" "<<n+1-i<<" ";
    cout<<"\n";
    cout<<n/2<<"\n";
    for(i=n/4+1;i<=n/2;i++)
    cout<<i<<" "<<n+1-i<<" ";
 }
 else if((n+1)%4==0)
 {
    
    cout<<"YES\n";
    cout<<n/2+1<<"\n";
    for(i=1;i<(n+1)/4;i++)
    cout<<i<<" "<<n+1-i<<" ";
    cout<<i<<" "<<(n+1)/2;
    ll k=n+1-i;
    cout<<"\n";
    cout<<n/2<<"\n";
    for(ll i=(n+1)/4+1;i<(n+1)/2;i++)
    cout<<i<<" "<<n+1-i<<" ";
    cout<<k<<"\n";
 }
 else
 cout<<"NO\n";
}
 
 