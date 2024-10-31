#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int n;
      cin>>n;

      map<string ,string> ans;
      map<string,string> has;

      for(int i=0;i<n;i++)
      {
         string a,b;
         cin>>a>>b;
         if(has.find(a) != has.end())
         {
               ans[has[a]] = b;
               has[b] = has[a];
         }
         else
         {
             ans [a] = b;
            has[b] = a;
         }
      }
      cout<<ans.size()<<endl;
      for(auto [x,y] : ans)
      {
         cout<<x<<" "<<y<<endl;
      }

     
    return 0;
}