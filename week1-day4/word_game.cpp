#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    int test;
    cin>>test;

    for(int t =0;t<test;t++)
    {

          int n;
      cin>>n;

     deque<string>dq1(n);
     deque<string>dq2(n);
     deque<string>dq3(n);
    

     map<string,int>mp;
     for(int i=0;i<n;i++)
     {
         cin>>dq1[i];
        
         mp[dq1[i]]++;
     }
     for(int i=0;i<n;i++)
     {
         cin>>dq2[i];
       
          mp[dq2[i]]++;
     }
     for(int i=0;i<n;i++)
     {
         cin>>dq3[i];
         
          mp[dq3[i]]++;
     }

     int person1 =0,person2 =0,person3 = 0;
     for(int i=0;i<n;i++)
     {
         if(mp[dq1[i]] == 1)
         {
             person1 += 3;
         }
         else if(mp[dq1[i]]==2)
         {
             person1 += 1;
         }
         if(mp[dq2[i]] == 1)
         {
             person2 += 3;
         }
         else if(mp[dq2[i]]==2)
         {
             person2 += 1;
         }
         if(mp[dq3[i]] == 1)
         {
             person3 += 3;
         }
         else if(mp[dq3[i]]==2)
         {
             person3 += 1;
         }
     } 

     cout<<person1<<" "<<person2<<" "<<person3<<endl;

    }

    
   
    return 0;
}