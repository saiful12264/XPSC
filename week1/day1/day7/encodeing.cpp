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
      set<char>st;
      for(int i=0;i<s.size();i++)
      {
         st.insert(s[i]);
      }
      vector<char>v;
      for(auto it = st.begin(); it!=st.end();it++)
      {
          v.push_back(*it);
      }
     map<char,char>mp;
     int i=0,j = v.size()-1;
     while(i<=j)
     {
          mp[v[i]] = v[j];
          mp[v[j]] = v[i];
          i++;
          j--;
     }
   
   for(int i=0;i<s.size();i++)
   {
         cout<<mp[s[i]];
   }
   cout<<endl;
          
     }

  
   
    return 0;
}