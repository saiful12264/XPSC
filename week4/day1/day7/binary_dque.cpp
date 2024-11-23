#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,k;
   cin>>n>>k;
   vector<int>v(n);
   long long int  s = 0;
   for(int i=0;i<n;i++)
   {
      cin>>v[i];
      s += v[i];
   }
   if(s<k)
   {
       cout<<-1<<endl;
       return;
   }
   if(s == k)
   {
      cout<<0<<endl;
      return;
   }

   int l = 0, r= 0;
   int sum = 0, ans = 0;
   while(r<n)
   {
      sum += v[r];
      
      if( sum == k)
      {
          ans = max(ans, (r-l+1));
      }
      else
      {
         while(sum >k)
         {
            sum -= v[l];
            l++;
         }

      }
      r++;
   }
   cout<< n-ans<<endl;
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

