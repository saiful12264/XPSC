#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int n;
      cin>>n;
      vector<int>v(n);
       map<string,int>mp;
      for(int i =0;i<n;i++)
      {
        string s;
        cin>>s;
        mp[s] ++;
         if(mp[s]==1)
         {
            cout<<"OK"<<endl;
         }
         else
         {
              cout<<s<<mp[s]-1<<endl;
         }
      }
     
      

     
    return 0;
}