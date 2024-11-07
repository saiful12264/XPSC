#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--)

   {

       int n;
      cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++)
      {
         cin>>v[i];
      }

  
      for(int i=0;i<n;i++)
      {
          int k;
          cin>>k;
          string s;
          cin>>s;
          for(int j =0;j<k;j++)
          {
               if(s[j] == 'D')
               {
                   if(v[i] != 9)
                   {
                      v[i]++;
                   }
                   else
                   {
                      v[i] = 0;
                   }
               }
               else
               {
                 if(v[i] != 0)
                 {
                     v[i]--;
                 }
                 else
                 {
                     v[i] = 9;
                 }
               }
          }
      }
      for(int c:v)
      {
         cout<<c<<" ";
      }
      cout<<endl;
     
   }

   

     
    return 0;
}