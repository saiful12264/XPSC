#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int n;
      cin>>n;
      
      map<int,int>mp;
      for(int i=0;i<n;i++)
      {
         int x;
         cin>>x;
         mp[x]++;
      }

      int mx = INT_MIN;

      for(auto [x,y] :mp)
      {
          mx = max(mx,y);
      }
      cout<<mx;

     
    return 0;
}