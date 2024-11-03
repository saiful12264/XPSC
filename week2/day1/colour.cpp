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
      string s1,s2;
      cin>>s1>>s2;

      replace(s1.begin(),s1.end(),'B','G');
      replace(s2.begin(),s2.end(),'B','G');
       
       if(s1 == s2)
       {
         cout<<"YES"<<endl;
       }
       else
       {
         cout<<"NO"<<endl;
       }


     }




     
    return 0;
}