#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    // int x = 0;
    // int y = 1;
    int curx = n-1,cury = n;
//   while(x<=n && y<=n)
//     {
        
//          if((x|y)*(x^y)==n)
//          {
//             curx = x;
//             cury = y;
//             break;

//          }
//          x+=2;y+=2;

//     }
    cout<<curx<<" "<<cury<<endl;
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