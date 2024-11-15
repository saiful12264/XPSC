#include<bits/stdc++.h>
using namespace std;
   vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        vector<int> fi;
        
        
       int n = arr.size();
       int l = n-1,r = n-1;
        int neg= 0 ;
        int cnt = 0;
       while(r>= 0)
       {
           
           if(cnt > l)
           {
               neg = 0;
           }
             if(arr[r]<0)
             {
                 neg = arr[r];
                 cnt = r;
             }
              if(l-r+1 == k)
           {
           
            fi.push_back(neg);
             
            
            l--;
           }
        r--;
       }
       reverse(fi.begin(),fi.end());
       return fi;
    }
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      

     
    return 0;
}