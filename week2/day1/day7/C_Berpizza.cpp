#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
     set<pair<int,int>>s;
        multiset<pair<int,int>>ml;
        int custumer = 1;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
       
        if(type==1)
        {
            int money;
            cin>>money;
            s.insert({custumer,money});
            ml.insert({money,-custumer});
            custumer++;

        }
        else if(type ==2)
        {
            cout<<s.begin()->first<<" ";
            int pos = s.begin()->first;
            int money = s.begin()->second;
            s.erase(s.begin());
            ml.erase({money,-pos});
        }
        else
        {
            cout<<-ml.rbegin()->second<<" ";
            
            int pos = -ml.rbegin()->second;
            int money = ml.rbegin()->first;
            ml.erase(--ml.end());
          
           
            s.erase({pos,money});
        }
    }
   
}
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    solve();  

     
    return 0;
}