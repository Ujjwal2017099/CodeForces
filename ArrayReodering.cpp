#include<bits/stdc++.h>
#define ll long long
#define d double
using namespace std;

int gcd(int a,int b)
{
     if (a == 0)
     {
          return b;
     }
     if (b == 0)
     {
          return a;
     }
     
     if (a > b)
     {
          return gcd(a%b , b);
     }
     return gcd(a,b%a);
}

void findGoodPairs(vector<int> vec)
{
     int n = vec.size();
     int count = 0;
     for (int i = 0; i < n - 1; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               // int t = gcd(vec[i] , vec[j]);
               // cout<<t<<endl;
               if (i!=j and gcd(vec[i], 2*vec[j]) > 1)
               {
                    count++;
               }
               else if (i!=j and gcd(2*vec[i], vec[j]) > 1)
               {
                    count++;
               }
               
          }
          
     }
     cout<<count<<endl;
     
}

int main()
{
     int t;
     cin>>t;

     while (t>0)
     {
          int n;
          cin>>n;

          vector<int> vec;
          for (int i = 0; i < n; i++)
          {
               int temp;
               cin>>temp;
               vec.push_back(temp);
          }
          
          findGoodPairs(vec);

          t--;
     }
     return 0;
}
