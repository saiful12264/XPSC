#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n%2 != 0)
    {
        cout<<"NO"<<endl;
        return;
        
    }
    cout<<"YES"<<endl;
    for(int i=0;i<(n/2);i++)
    {
        cout<<"AAB";
    }
    cout<<endl;
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