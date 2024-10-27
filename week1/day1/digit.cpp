#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int a;
      cin>>a;
      if(a>= 0 && a<= 9)
      {
         cout<<"000"<<a;
      }
      else if(a>= 10 && a<= 99)
      {
         cout<<"00"<<a;
      }
      else if(a>=100 && a<= 999)
      {
         cout<<"0"<<a;
      }
      else
      {
         cout<<a;
      }

     
    return 0;
}