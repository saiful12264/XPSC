#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,s;
    cin>>n>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
   long long int l = 0,r = 0, ans = 0;
    long long int sum = 0;

    while(r<n)
    {
        sum += v[r];
        while(sum>= s && l<=r)
        {
            ans += (n-r);
          
            sum -= v[l];
           
          

            l++;
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
