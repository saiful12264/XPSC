#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n;
   cin>>n;
   vector<int>v(n+1);
   for(int i=1;i<=n;i++)
   {
      cin>>v[i];
   }
  
   int ans = abs(v[1]-1);
   for(int i=2;i<=n;i++)
   {
        ans = __gcd(ans,abs(v[i]-i));
   }
   cout<<ans<<endl;
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