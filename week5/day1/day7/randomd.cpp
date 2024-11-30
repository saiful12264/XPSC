#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
   for(int i=1;i<=k;i++)
   {
      v.push_back(i);
   }
   for(int  i= n;i> k;i--)
   {
    v.push_back(i);
   }
   for(int val:v)
   {
    cout<<val<<" ";
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