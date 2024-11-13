#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }
    int i=0,j =0;
    long long int ans = 0;
    vector<long long int> v;
    while(i<n || j<m)
    {
        if(i<n && v1[i]==v2[j])
        {
             ans++;
             i++;


        }
        else if(j<m && v1[i] != v2[i])
        {
             v.push_back(ans);
             j++;
             ans = 0;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      solve();

     
    return 0;
}