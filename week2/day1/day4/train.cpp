#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int t;
      cin>>t;
      while(t--)
      {
          int n,k;
          cin>>n>>k;
          map<int,set<int>>mp;
          for(int i=0;i<n;i++)
          {
             int a;
             cin>>a;
             mp[a].insert(i);
          }
           
         

          for(int i=0;i<k;i++)
          {
             int l,r;
             cin>>l>>r;
             if(mp.find(l) == mp.end() || mp.find(r) == mp.end())
             {
                cout<<"NO"<<endl;
             }
             else
             {
                 int s = *mp[l].begin();
                 int e = *mp[r].rbegin();
               
                 if(s<e)
                 {
                   cout<<"YES"<<endl;
                 }
                 else
                 {
                   cout<<"NO"<<endl;
                 }
             }
          }
      }

     
    return 0;
}