#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int x,y,z;
     cin>>x>>y>>z;
     int match = x+y+z;
     int remain = 4 - match;
     double point = x + (.5*y)+remain;
  
     if(point>2)
     {
        cout<<"YES"<<endl;
     }
     else
     {
        cout<<"NO"<<endl;
     }

}
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      solve();

     
    return 0;
}