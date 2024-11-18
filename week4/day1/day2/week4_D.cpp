#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,n,s;
    cin>>a>>b>>n>>s;
 long long int x = s/n;

  long long int ans = 0 ;
    if(a>x)
    {
        ans = n*x;
    }
    else
    {
        ans = n*a;
    }

  
  
    long long int y = s - ans;
    if(b>y)
    {
        ans += y;
    }
    else
    {
        ans +=b;
    }
    
    if(ans == s)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


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