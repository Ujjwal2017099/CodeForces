#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
     int t;
     cin>>t;
     while (t>0)
     {
          int a,b,c,d;
          cin>>a>>b>>c>>d;
 
          if (a == d)
          {
               cout<<(a+c)<<endl;
          }
          else
          {
               cout<<max(a+b , c+d)<<endl;
          }
          t--;
     }
   return 0;  
}
