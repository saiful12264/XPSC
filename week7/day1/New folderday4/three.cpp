#include<bits/stdc++.h>
using namespace std;
void solve()
{
   long long  int n,k;
    cin>>n>>k;
vector<long long int>ar(n);
for(int i=0;i<n;i++)
{
    cin>>ar[i];
}
    vector<long long int>v(31);
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<31;j++)
        {
            if((ar[i]>>j)& 1LL)
            {
                continue;

            }
            else
            {
                v[j]++;
            }
            
        }
    }

     int have = k;
    for(int i=30;i>=0;i--)
    {
        int need = v[i];
       
        if(need<= have)
        {
            have = have - need;
            v[i] = 0;


            
        }
    }

    
    for(int i =0;i<=30;i++)
    {
         if(v[i] == 0)
         {
            long long int m = pow(2,i);
             sum += m;
         }
    }

    cout<<sum<<endl;
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