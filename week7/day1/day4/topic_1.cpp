#include<bits/stdc++.h>
using namespace std;
void solve()
{
  long long  int n;
    cin>>n;
    deque<long long int>v;

    
    for(int i=0;i<=__lg(n);i++)
    {
        if((n>>i)&1)
        {
            int m =n - (1LL<<i);
           if(m != 0)
           {
             v.push_front(m);
           }
            
         
            
        }
      
       
    }
    v.push_back(n);

    cout<<v.size()<<endl;
    for(auto val:v)
    {
       cout<<val<<" ";
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