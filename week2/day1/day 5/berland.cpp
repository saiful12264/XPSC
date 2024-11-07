#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
     return a.second<b.second;
}
bool cmp1(pair<int,int>a,pair<int,int>b)
{
     return a.first<b.first;
}
void solve()
{
     int n;
     cin>>n;
     vector<int>v;
     for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         v.push_back(x);
     }
     string s;
     cin>>s;

 vector<pair<int,int>>v0;
 vector<pair<int,int>>v1;
 
 for(int i=0;i<n;i++)
 {
     if(s[i]=='0')
     {
         v0.push_back({i,v[i]});
         
     }
     else
     {
         v1.push_back({i,v[i]});
     }
 }
 sort(v0.begin(),v0.end(),cmp);
 for(int i=0;i<v0.size();i++)
 {
     v0[i].second = i+1;
 }
 sort(v1.begin(),v1.end(),cmp);
 for(int i=0;i<v1.size();i++)
 {
    v1[i].second = v0.size()+i+1;
 }

 vector<pair<int,int>>vf;

 vf.insert(vf.begin(),v0.begin(),v0.end());
 vf.insert(vf.begin()+v0.size(),v1.begin(),v1.end());
 
sort(vf.begin(),vf.end(),cmp1);
 for(int i=0;i<vf.size();i++)
 {
     cout<<vf[i].second<<" ";
 }
 cout<<endl;




   
}
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--)

   {
     solve();

   }
 
      

     
    return 0;
}