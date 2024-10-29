#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      vector<char>v;
      string s;
      cin>>s;
      for(int i =0;i<s.size();i++)
      {
           v.push_back(s[i]);
      }
      string x = "None";
     
      for(int i= 'a';i<='z';i++)
      {
          auto it = find(v.begin(),v.end(),char(i));
          if( it == v.end())
          {
            
            x = char(i);
            break;
               


          }

      }
      cout<<x;
       


     
    return 0;
}