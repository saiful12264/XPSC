#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int l=0,r = 0;
    int ans = INT_MAX;
    queue<char>q;
    while(r<n)
    {
        if(s[r] == 'W')
        {
            q.push(s[r]);
        }
        if(r-l+1 == k)
        {
             int sz = q.size();
            ans = min(ans,sz);

            if(!q.empty())
            {
               if(q.front()== s[l])
               {
                q.pop();
               }

            }

            l++;

        }
        r++;
    }

    cout<<ans<<endl;
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