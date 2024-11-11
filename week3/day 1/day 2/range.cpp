#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
        v2.push_back(x);
        v3.push_back(x);

    }
    int range1 = 0;
    auto mn = min_element(v1.begin(),v1.end());
    v1.erase(mn);
    auto mn1 = min_element(v1.begin(),v1.end());
    v1.erase(mn1);

    range1 =  *max_element(v1.begin(),v1.end())- *min_element(v1.begin(),v1.end());


    int range2 = 0;
    auto mx = max_element(v2.begin(),v2.end());
    v2.erase(mx);
    auto mx1 = max_element(v2.begin(),v2.end());
    v2.erase(mx1);

    range2 =  *max_element(v2.begin(),v2.end())- *min_element(v2.begin(),v2.end());


    int range3 = 0;
    auto mx3 = max_element(v3.begin(),v3.end());
    v3.erase(mx3);
    auto mn3 = min_element(v3.begin(),v3.end());
    v3.erase(mn3);

    range3 =  *max_element(v3.begin(),v3.end())- *min_element(v3.begin(),v3.end());


    int range = min({range1,range2,range3});
    cout<<range<<endl;
   

}
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int t;
      cin>>t;
      while (t--)
      {
        /* code */
        solve();
      }
      

     
    return 0;
}