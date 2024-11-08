#include<bits/stdc++.h>
using namespace std;
void solve()
{
  long long int n;
      cin>>n;
      vector<long long int>v(n);
      for(int i=0;i<n;i++)
      {
         cin>>v[i];
      }
      priority_queue<long long int>pq;
     long long int sum = 0;
      for(int i=0;i<n;i++)
      {
         if(v[i] != 0)
         {
             pq.push(v[i]);
         }
         if(!pq.empty())
         {
              if(v[i] == 0)
          {
             sum += pq.top();
             pq.pop();
          }

         }
      }
      
     
      cout<<sum<<endl;

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