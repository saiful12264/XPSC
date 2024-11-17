#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int r = 0, cnt = 0;
    char ans = s[r];
  
    while(r<n)
    {
        
         if(s[r] != ans)
         {
            cnt ++;
            while( r<n &&  s[r] != ans)
            {
                r++;
            }
         }
         else
         {
            r++;
         }
    }
    cout<<cnt<<endl;
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