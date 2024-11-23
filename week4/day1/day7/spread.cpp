#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n,k;
    cin>>n>>k;
    vector<long long int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    multiset<long long int>ml;
 long long   int l = 0 ,r = 0,ans = 0;
    while(r<n)
    {
        ml.insert(v[r]);
    long long    int mn = *ml.begin();
    long long int mx = *ml.rbegin();
        if(mx - mn <=k)
        {
            ans += (r-l+1);

        }
        else
        {
            while(l<=r)
            {
                 mn = *ml.begin();
                 mx = *ml.rbegin();
        if(mx - mn <=k)
        {
          break;

        }
          
         ml.erase(ml.find(v[l]));
         l++;

            }
                      mn = *ml.begin();
                 mx = *ml.rbegin();
        if(mx - mn <=k)
        {
            ans += (r-l+1);

        }


        }
        r++;

    }
    cout<<ans<<endl;
}
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      solve();

     
    return 0;
}