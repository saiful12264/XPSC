#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n,s;
    cin>>n>>s;
    vector<long long int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long int l = 0,r = 0 ,ans = 0 , sum = 0;
    while(r<n)
    {
        sum += v[r];
        if(sum <= s)
        {
            ans += (r-l+1);

        }
        else
        {
            while(sum> s && l<r)
            {
                sum -= v[l];
                l++;
            }
             if(sum <= s)
        {
            ans += (r-l+1);

        }


        }
        r++;
    }
    cout<<ans;

}
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      solve();

     
    return 0;
}