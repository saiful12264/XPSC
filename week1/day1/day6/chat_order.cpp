#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int n;
      cin>>n;
     vector<string>v;
     map<string,int>mp;
     for(int i=0;i<n;i++)
     {
         string s;
         cin>>s;
         v.push_back(s);
        
     }

    
    for(int i=n-1;i>=0;i--)
    {
         mp[v[i]]++;
         if(mp[v[i]] ==1)
         {
             cout<<v[i]<<endl;
         }
       
      
    }
   

     
    return 0;
}