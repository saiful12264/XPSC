#include<bits/stdc++.h>
using namespace std;

long long maximumSumSubarray(vector<int>& arr, int k)
 {
   
  int i = 0,j = k-1;
  long long int ans = 0;
  while (j<arr.size())

  {
    /* code */
      long long int y = 0;
      for(int l = i;l<=j;l++)
      {
         y += arr[i];

      }
      i++;j++;
      ans = max(ans,y);
  }
 return ans;
  


    
 }
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int k;
    cin>>k;
    vector<int>arr;
    int x;
   while(cin>>x)
   {
     arr.push_back(x);
   }

 cout<<  maximumSumSubarray(arr,k);
//    for(int i=0;i<arr.size();i++)
//    {
//     cout<<arr[i]<<" ";
//    }

     
    return 0;
}