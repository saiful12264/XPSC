#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

     long long int n;
      cin>>n;
      long long int sum =0;
      vector<long long int>v(n);
      for(int i=0;i<n;i++)
      {
          cin>>v[i];
          sum +=v[i];
         

      }
      
      
      long long int mn = INT_MAX;

      for(int i=0;i<n;i++)
      {
           if(v[i]%2!=0)
           {
              mn = min(mn,v[i]);
           }
      }
      
      if(sum%2 != 0)
      {
           sum -= mn;
      }
      cout<<sum;

     
    
    
   


  
    return 0;
}