#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
     int n;
     cin>>n;

     while (n--)
     {
        
      string s;
      cin>>s;
      string ans;
      int pos = -1;
      for(int i=0;i<s.size()-1;i++)
      {
          if(s[i] == s[i+1])
          {
              pos = i;
              break;
          }

         
      }
      
       if(pos!= -1)
       {
           if(s[pos] != 'z')
           {
               s.insert(s.begin()+pos+1,char(s[pos]+1));
           }
           else
           {
               s.insert(s.begin()+pos+1,char(s[pos]-12));
           }
       }
       else
       {
            if(s[s.size()-1] != 'z')
            {
                 s.push_back('z');
            }
            else
            {
                s.push_back(char(s[s.size()-1]-12));
            }
       }

      cout<<s<<endl;
        
     }   
     



     
    return 0;
}