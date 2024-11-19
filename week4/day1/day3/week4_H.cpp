#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,c;
    cin>>n>>c;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<long long int>cost;
    for(int i=0;i<n;i++)
    {
         long long int co = i + 1 + v[i];
         cost.push_back(co);
         
    }
    sort(cost.begin(),cost.end());
    int cnt = 0;
    for(auto val:cost)
    {
       
        if(val<=c)
        {
             cnt++;
             c -=val;
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