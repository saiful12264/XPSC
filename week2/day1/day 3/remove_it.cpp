#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int n,x;
      cin>>n>>x;
      vector<int>v(n);
      for(int i=0;i<n;i++)
      {
         cin>>v[i];
      }
      vector<int> ans;
      for(int i=0;i<n;i++)
      {
          if(v[i] != x)
          {
             ans.push_back(v[i]);
          }
      }
      for(int c: ans)
      {
         cout<<c<<" ";
      }

     
    return 0;
}