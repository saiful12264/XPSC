#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans = v[0];
    for(int i=1;i<n;i++)
    {
        ans = ans ^ v[i];
    }
   int mn = ans ;
   for(int i=0;i<n;i++)
   {
      int x = ans ^ v[i];
      mn = min(mn , x);
   }
   cout<<mn<<endl;
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