#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
   
    vector<char>ch;
    for(int i=0;i<mp[0];i++)
    {
        ch.push_back(char(i+97));
    }
    
    map<int,int>cnt;
    for(int i=0;i<n;i++)
    {
        cnt[v[i]]++;
        cout<<ch[cnt[v[i]]-1];
    }
    cout<<endl;
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