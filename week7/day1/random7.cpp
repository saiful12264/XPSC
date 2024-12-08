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
    int l = 0, r= 0;
    long long int sum = 0 , cnt = 0;
    priority_queue<int>pq;
    while(r<n)
    {
        sum += v[r];
        long long int sum1 = sum;

        pq.push(v[r]);
        sum1 -= pq.top();
        if(pq.top() == sum1)
        {
            cnt++;
        }
        r++;

         
    }
    cout<<cnt<<endl;

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