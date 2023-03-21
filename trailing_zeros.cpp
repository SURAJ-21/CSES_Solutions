#include<bits/stdc++.h>
#define ll  long long int 
#define ld  long long double 
const ll BIG=1e9+10;
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);cout.tie(0);
 ll n,c=1,i=0,s=0;cin>>n;
 while(c<=n)
 {
   i++;
   c=pow(5,i);
   s+=n/c;
 }
 cout<<s<<"\n";
}
 
 