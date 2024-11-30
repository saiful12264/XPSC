#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    int fre[n] = {0};
    for(int i=0;i<n;i++)
    {
         if(a[i] == c[i])
         {
              fre[i] = 1;
         }
    }
    for(int i=0;i<n;i++)
    {
         if(b[i] == c[i])
         {
              fre[i] = 1;
         }
    }
    bool ans = false;
    for(int i=0;i<n;i++)
    {
          if(fre[i] == 0)
          {
              ans = true;
              break;
          }
    }
    if(ans ) cout<<"YES"<<endl;
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