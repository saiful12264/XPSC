#include<bits/stdc++.h>
using namespace std;
void solve()
{
  long long  int n,s;
    cin>>n>>s;
    vector<int>v(n);
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        
    }
   
    int l = 0,r = 0;
    int sz = 0;
    while(r<n)
    {
        sum += v[r];
        if(sum<= s)
        {
           sz = max(sz,r-l+1);

        }
        else
        {
            sum -= v[l];
            l++;
           
        }
        r++;
    }
    cout<<sz<<endl;
}
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      solve();

     
    return 0;
}