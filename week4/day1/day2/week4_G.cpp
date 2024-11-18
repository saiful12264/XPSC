#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        v.push_back(int(x-48));
    }
    reverse (v.begin(),v.end());
    int i = 0;
    string s;
    while(i<n)
    {
        int x = v[i];
        if(x == 0)
        {
            int y = v[i+2]*10 +  v[i+1];
            char c = char(y+96);
            s.push_back(c);
            i +=3;
        }
        else
        {
            char c = char(x+96);
            s.push_back(c);
            i++;

        }



    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    
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

