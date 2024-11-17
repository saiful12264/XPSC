#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    int ans = x - y;
    if(ans >= 18)
    {
        cout<<"RCB";
    }
    else
    {
        cout<<"CSK";
    }
}
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      
solve();
     
    return 0;
}