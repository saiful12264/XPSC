#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int n;
      cin>>n;
      vector<int>st;
      for(int i=0;i<n;i++)
      {
         int x;
         cin>>x;
         st.push_back(x);
      }
      sort(st.begin(),st.end());
     int cnt = 0;
      int k = 1;
     for(int i=0;i<n;i++)
     {
        
          if(st[i]>=k)
          {
          
             cnt++;
             k++;
           
          }

     }
     cout<<cnt;

     
    return 0;
}