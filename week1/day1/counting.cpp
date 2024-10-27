#include<iostream> 
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int a,b;
      cin>>a>>b;

      int c = b-a;
      if(c>=0)
      {
         cout<<c+1;
      }
      else
      {
        c = 0;
         cout<<c;
      }

     
    return 0;
}