#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n,k;
    cin >> n >> k;
    map<int,int> mp;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int i=0,j=0,ans=0;
    while(j<n){
        mp[v[j]]++;
        while(mp.size()>k){
            mp[v[i]]--;
           if(mp[v[i]]==0) mp.erase(v[i]);
           i++;
        }
         ans+=j-i+1;
        j++;
    }
    cout << ans << endl;

}
int main()
{
   
 
        solve();

    
}