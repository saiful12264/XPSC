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
          string s;
          cin>>s;

          string ans = "Timur";

          int sz = ans.size();

          if(sz == n)
          {
              set<char>st1;
              set<char>st2;
              for(int i=0;i<ans.size();i++)
              {
                  st1.insert(s[i]);
              }
              for(int i=0;i<s.size();i++)
              {
                  st2.insert(ans[i]);
              }
              if(st1 == st2)
              {
                 cout<<"YES"<<endl;

              }
              else
              {
                 cout<<"NO"<<endl;
              }
          }
          else
          {
             cout<<"NO"<<endl;
          }
      }

     
    return 0;
}