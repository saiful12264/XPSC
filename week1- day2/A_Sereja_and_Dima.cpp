#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int n;
      cin>>n;
    
      deque<int>dq(n);
      for(int i=0;i<n;i++)
      {
        cin>>dq[i];
      }
      int i = 1;
      int sereja = 0,dima =0;
      while(!dq.empty())
      {
          int left = dq.front(); int right = dq.back();
          int mx = max(left,right);
          if(i%2 != 0)
          {
              sereja += mx;
          }
          else
          {
             dima += mx;
          }
          if(left == mx) dq.pop_front();
          else  dq.pop_back();

          i++;


      }
      cout<<sereja<<" "<<dima;

     
    return 0;
}