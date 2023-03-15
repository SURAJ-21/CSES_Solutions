#include<bits/stdc++.h>
using namespace std;
int main()
{
    long k=1,n,i,m=0;
   string s;
   cin>>s;
   n=s.size();
   for(i=0;i<n;i++)
   {
       if(s[i]==s[i+1])
       k+=1;
       else
       {
           if(k>m)
           m=k;
           k=1;
       }
   }
   cout<<m;
}