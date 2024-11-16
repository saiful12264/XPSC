#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt  = 0;
    int r = 0;
    while(r<n)
    {
        if(s[r] == 'B')
        {
             cnt++;
             r += k;
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

