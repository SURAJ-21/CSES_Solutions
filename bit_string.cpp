#include<bits/stdc++.h>
#define ll  long long int 
#define ld  long long double 
const ll N=1e9+7;
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);cout.tie(0);
 ll n;cin>>n;
 ll p=1;
 for(ll i=1;i<=n;i++)
 {
  p=p*2;
  if(p>N)
  {
    p=p%N;
  }
 }
 cout<<p<<"\n";
}
 