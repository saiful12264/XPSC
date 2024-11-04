#include<bits/stdc++.h>
using namespace std;
void solve()
{
        int n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      map<char,int>mp;
      for(int i=0;i<s.size();i++)
      {
           mp[s[i]]++;
      }
      int oddcnt = 0;
      
      for(auto [x,y] :mp)
      {
         if(y %2 !=0)
         {
             oddcnt++;
            

         }
       
         
      }
   if(oddcnt > k+1)
   {
      cout<<"NO"<<endl;
   }
   else
   {
      cout<<"YES"<<endl;
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