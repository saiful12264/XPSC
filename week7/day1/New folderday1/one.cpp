#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int n;
      cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++)
      {
        cin>>v[i];
      }
      
      bool flag = false;
      for(int i=0;i<(1<<n);i++)
      {
          long long sum = 0;
          for(int j =n-1;j>=0;j--)
          {
             if((i>>j) & 1)
             {
                sum += v[j];
             } 
             else
             {
                sum -= v[j];
             }
             
          }
          if(sum %360 == 0)
          {
            flag = true;
            break;
          }
      }
     
      if(flag == true)
      {
         cout<<"YES"<<endl;
      }
      else
      {
        cout<<"NO"<<endl;
      }


     
    return 0;
}