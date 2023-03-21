#include<bits/stdc++.h>
#define ll  long long int 
#define ld long double 
const ll BIG=1e9+10;
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);cout.tie(0);
 ll t;cin>>t;
 while(t--)
 {
    ll a,b;
   cin>>a>>b;
  if(2*a>=b&&2*b>=a&&(2*b-a)%3==0&&(2*a-b)%3==0)
  cout<<"YES\n";
  else cout<<"NO\n";
 }
}
 