#include<bits/stdc++.h>
#define ll  long long int 
#define ld long double 
const ll BIG=1e9+10;
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);cout.tie(0);
 string s;cin>>s;
 vector<int>v(26);
 for(ll i=0;i<s.length();i++)
  v[s[i]-'A']++;
 vector<char>s1;char c='3';ll cnt=0;
 for(int i=0;i<26;i++)
 {
     for(int j=0;j<v[i]/2;j++)
     {
       s1.push_back(i+65);
     }
     if(v[i]%2==1){
     c=char(i+65);cnt++;}
 }
 int l=s1.size();
  if(c!='3')
  s1.push_back(c);
 for(int i=0;i<l;i++)
  s1.push_back(s1[l-i-1]);
 if(cnt>1)cout<<"NO SOLUTION\n";
 else{
 for(int i=0;i<s1.size();i++)cout<<s1[i];
 cout<<"\n";
 }
 }
 