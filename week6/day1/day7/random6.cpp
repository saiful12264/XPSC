#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
     cin>>n;
     vector<long long int>v(n);
     for(int i=0;i<n;i++)
     {
        cin>>v[i];
     }
    
     long long pos = -1;
     for(int i=0;i<n-1;i++)
     {
         if(v[i] != 0)
         {
            pos = i;
            break;
         }

     }

     if(pos == -1 )
     {
        cout<<0<<endl;
        return;
     }
    long long  int cnt = 0;
    
     for(int i=pos;i<n-1;i++)
     {
         if(v[i] == 0)
         {
            cnt += 1;
         }
         else
         {
            cnt += v[i];
         }

     }
     cout<<cnt<<endl;
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