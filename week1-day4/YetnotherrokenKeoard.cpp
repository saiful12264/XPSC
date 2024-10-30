#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char,int>a, pair<char,int>b)
{
      return a.second<b.second;
}
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--)
   {

      
      string s;
      cin>>s;
      vector<pair<char,int>>up;
      vector<pair<char,int>>low;

      for(int i=0;i<s.size();i++)
      {   
          if(s[i] != 'B' && s[i] != 'b')
          {
             if(isupper(s[i]))
             {
                 up.push_back({s[i],i});
             }
             else
             {
                 low.push_back({s[i],i});
             }
          }
          else
          {
              if(s[i]== 'B')
              {
                 if(!up.empty())
                 {
                     up.pop_back();
                 }
              }
              else
              {
                 if(!low.empty())
                 {
                     low.pop_back();
                 }
              }
          }
      }
        
        vector<pair<char,int> >v;

        for(auto valu:up)
        {
             v.push_back(valu);
        }
        for(auto value:low)
        {
             v.push_back(value);
        }
        
        sort(v.begin(),v.end(),cmp);
        for(auto [x,y]:v)
        {
            cout<<x;
        }
        cout<<endl;
     

   }

    return 0;
}