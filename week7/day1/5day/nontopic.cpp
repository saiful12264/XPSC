#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    if(mp.size()== 1)
    {
        for(auto [x,y]:mp)
        {
            if(x == 0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
    else if(mp[0] <= ceil(n/2.0) )
    {
        cout<<0<<endl;
    }
    else if(mp[0]> n/2)
    {
       if(mp[1]== (n-mp[0]))
       {
        cout<<2<<endl;
       }
        else
        {
            cout<<1<<endl;

        }
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