#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> first(n);
    vector<int>second(m);
    for(int i=0;i<n;i++)
    {
        cin>>first[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>second[i];
    }
    int l=0,r =0, cnt = 0;
    vector<int>ans;
    while(r<m)
    {
         if(l<n && first[l]<second[r])
         {
             cnt++;
             l++;
         }
         else
         {
             r++;
             ans.push_back(cnt);
         }
    }

    for(int val:ans)
    {
        cout<<val<<" ";
    }


}
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      solve();

     
    return 0;
}