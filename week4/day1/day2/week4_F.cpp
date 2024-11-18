#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x = a - 1;
   int z = abs(b-c);
   int y;
   if(b>c)
   {
      y = b - 1;
   }
   else
   {
      y = z + c -1;
   }

   if( x == y )
   {
    cout<< 3<<endl;
   }
   else if( x <y)
   {
      cout<< 1<<endl;
   }
   else
   {
     cout<< 2 <<endl;
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