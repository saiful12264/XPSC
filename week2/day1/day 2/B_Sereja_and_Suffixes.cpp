#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int n,m;
      cin>>n>>m;
      vector<int>v(n);
      for(int i=0;i<n;i++)
      {
         cin>>v[i];
      }
     
      set<int>st;
      deque<int>dq;
      for(int i=n-1;i>=0;i--)
      {
     
          st.insert(v[i]);
         dq.push_front(st.size());
      }
     for(int i=0;i<m;i++)
     {
        int l;
        cin>>l;
        l--;
        cout<<dq[l]<<endl;  
        
     }


     
    return 0;
}