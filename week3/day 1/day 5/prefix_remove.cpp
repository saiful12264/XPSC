#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>dq(n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>dq[i];
        mp[dq[i]] = 1;
    }
 
    vector<int>ans;
    for(int i= n-1;i>=0;i--)
    {
         if(mp[dq[i]]==1)
         {
            ans.push_back(dq[i]);
            mp[dq[i]] = 2;
         }
         else
         {
             break;
         }

    }

    int y = dq.size()- ans.size();
    cout<<y<<endl;
  
    
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
