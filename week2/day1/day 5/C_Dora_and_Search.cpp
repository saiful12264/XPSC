#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l = 0 ,r = n-1;
    int mn = 1,mx = n;

    while(l<=r)
    {
        if(v[l] == mn)
        {
          l++;
          mn++;
        }
        else if(v[l] == mx)
        {
           l++;
           mx--;
        }
        else if((v[r]== mn))
        {
            r--;
            mn++;
           
        }
        else if(v[r] == mx)
        {
           r--;
           mx--;
        }
        else
        {
            break;
        }

    }
    if(l<=r)
    {
       cout<<l+1<<" "<<r+1<<endl;
    }
    else
    {
       cout<<-1<<endl;
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