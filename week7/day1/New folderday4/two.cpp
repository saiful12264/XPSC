#include<bits/stdc++.h>
using namespace std;
void solve()
{
  long long  int n;
   cin>>n;
   vector<long long int>v;

   for(long long int i = __lg(n);i>=0;i--)
   {
       if((n>>i)&1)
       {
        long long  int k = n & (~(1LL<<i));
          if(k>0)
          {
             v.push_back(k);
          }
       }
    

   }
      v.push_back(n);
      cout<<v.size()<<endl;
   for(long long int val:v)
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