#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;

    int fory = ceil( (y/2.00));
   
    int total = fory * 15;
    int remin =  total - (y*4);

    int ans = remin - x;
    if( ans >= 0)
    {
        cout<<fory<<endl;
    }
    else
    {
        ans = ans * (-1);
        int need = ceil(ans/15.00);
        cout<< (fory + need)<<endl;
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

