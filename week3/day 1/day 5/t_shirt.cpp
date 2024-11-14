#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a,b;
    cin>>a>>b;
    int ans1 = 0;
    int ans2 = 0;
    int asz = a.size()-1;
    for(int i=a.size();i>=0;i--)
    {
         if(a[i]== 'S')
         {
            ans1 += 1;
            ans1 -= asz;
            break;

         }
         else if(a[i]== 'M')
         {
            ans1 += 2;
             
         }
         else if(a[i] == 'L')
         {
             ans1 += 3;
             ans1 += asz;
             break;

         }

    }
    int bsz = b.size() -1;
    for(int i=b.size();i>=0;i--)
    {
         if(b[i]== 'S')
         {
            ans2 += 1;
            ans2 -= bsz;
            break;

         }
         else if(b[i]== 'M')
         {
            ans2 += 2;
             
         }
         else if(b[i] == 'L')
         {
             ans2 += 3;
             ans2 += bsz;
             break;

         }

    }

    int x = ans1 - ans2;

    if(x >0)
    {
        cout<<">"<<endl;
    }
    else if( x == 0)
    {
        cout<<"="<<endl;
    }
    else
    {
        cout<<"<"<<endl;
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