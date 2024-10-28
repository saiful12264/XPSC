#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

     int test;
     cin>>test;
     for(int t = 0;t<test;t++)
     {
          int n;
      cin>>n;
      deque<char>dq(n);
      for(int i=0;i<n;i++)
      {
         cin>>dq[i];
      }
    while(dq.front() != 'B' || dq.back() != 'B')
    {   


         if(dq.front() == 'W')
        {
             
             dq.pop_front();
        }

         if(dq.back() == 'W') 
       {
          
           dq.pop_back();
       }
    }
    
    cout<<dq.size()<<endl;

     }

     
    return 0;
}