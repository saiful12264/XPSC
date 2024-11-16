#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
     long long int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

        if(v[i]<0)
        {
            long long int a = - v[i];
            sum += a;
        }
        else
        {
            sum +=v[i];
        }
    }
    int r =0,cnt = 0,ans = 0;
   

    while(r<n)
    {
         
         if(v[r]<0)
         {
             ans++;
             while( r<n &&  v[r]<=0)
             {
               r++;
             }

         }
         else 
         {
            r++;
         }

    }

    

  
    cout<<sum<<" "<<ans<<endl;
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

