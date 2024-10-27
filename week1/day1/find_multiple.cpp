#include<iostream> 
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    long long  int a,b,c;
      cin>>a>>b>>c;
   long long  int ans =  b/c * c;

   if(ans>=a)
   cout<<ans;
   else
   cout<<-1;


     
    return 0;
}