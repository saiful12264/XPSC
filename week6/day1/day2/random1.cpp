#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int pos = -1;
    vector<int>a;
    for(int i=0;i<n-1;i++)
    {
        a.push_back(v[i]);
        if(v[i]>v[i+1])
        {
        
             pos = i+1;
             break;

        }
    }
 
    
    if(pos == -1)
    {
        cout<<"YES"<<endl;
        return;
    }
   
    a.insert(a.begin(),v.begin()+pos,v.end());
 
  
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            cout<<"NO"<<endl;
            return;
        }

    }
    cout<<"YES"<<endl;
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