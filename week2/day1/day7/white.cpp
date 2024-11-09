#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    priority_queue<int>pq;
    for(int i=1;i<=n;i++)
    {
         pq.push(i);
    }
    vector<pair<int,int>>v;
    for(int i=0;i<n-1;i++)
    {
         int a = pq.top();
         pq.pop();
         int b = pq.top();
         pq.pop();
        v.push_back({a,b});

         int d = a+b;
         int c = ceil(d/2.0) ;
        
         pq.push(c);
 
    }
    cout<<pq.top()<<endl;
    for(auto [x,y]:v)
    {
         cout<<x<<" "<<y<<endl;
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