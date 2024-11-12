#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    stack<string>st;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
       
        st.push(s);
        mp[s] = 1;
    }

  
  
    while(!st.empty())
    {
      
         string x = st.top();
        
        
         if(mp[x] == 1)
         {
              cout<<x.substr(x.size()-2,2);
              mp[x] = 2;
             
         }
          st.pop();
       
    }
}
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      solve();

     
    return 0;
}