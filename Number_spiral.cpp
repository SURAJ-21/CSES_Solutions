#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
   ll t;cin>>t;
   while(t--)
   {
     ll x,y,k,d=0,c;cin>>x>>y;
     k=max(x,y);
     if(k==x)
     {
         d=k*k-k+1;
         (x%2==0)?c=d+(x-y):c=d-(x-y);
     }
     else
     {
          d=k*k-k+1;
         (y%2==1)?c=d+(y-x):c=d-(y-x);
     }
     cout<<c<<"\n";
   }
}