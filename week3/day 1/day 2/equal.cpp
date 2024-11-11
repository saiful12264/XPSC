#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int n;
     cin>>n;
   
     set<int>s;
     for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;

       if(x>0)
         s.insert(x);
     }
    
      if(s.size()<= 1) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
     
    
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