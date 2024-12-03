#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    if(n==m)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(n<m)
    {
        cout<<"NO"<<endl;
        return;
    }
    stack<int>st;
     for(int i=0;i<n;i++)
     {
          if(st.size()<= m)
    {
        st.push(1);
    }
    else
    {
        st.pop();
    }

     
    }
    if(st.size()== m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
     
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