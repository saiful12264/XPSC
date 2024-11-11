#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int n;
     cin>>n;
     deque<char>dq;
     for(int i=0;i<n;i++)
     {
        char x;
        cin>>x;
        dq.push_back(x);
     }
   
     for(int i=0;i<n/2;i++)
     {
          if(dq[0] == '1'  && dq[dq.size()-1] == '0')
          {
            
             dq.pop_back();
             dq.pop_front();
          }
          else if(dq[0] == '0'  && dq[dq.size()-1] == '1')
          {
            
             dq.pop_back();
             dq.pop_front();
          }
     }
     if(dq.empty())
     {
        cout<<0<<endl;
     }
     else
     {
        cout<<dq.size()<<endl;
     }
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