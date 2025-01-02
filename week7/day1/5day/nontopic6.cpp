#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
         int i = 2;
         while(i <= 3*n)
         {
            cout<<i<<" ";
            i+=4;
            cout<<i<<" ";
            i+=2;


              
         }
         cout<<endl;
    }
    else
    {
        cout<<ceil(n/2.0)<<endl;
        int x = n -1;
          int i = 2;
         while(i <= 3*x)
         {
            cout<<i<<" ";
            i+=4;
            cout<<i<<" ";
            i+=2;


              
         }
         cout<<(3*n-2)<<" "<<(3*n-1)<<endl;

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