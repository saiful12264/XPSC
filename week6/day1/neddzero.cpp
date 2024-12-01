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
    int ans = 0;
    if(n%2==0)
    {
        for(int i=0;i<n;i++)
        {
            ans = ans^v[i];
        }
        if(ans == 0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }
    else
    {
        for(int i=0;i<n;i++)
        {
             ans = v[i]^ans;
        }
        cout<<ans<<endl;
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