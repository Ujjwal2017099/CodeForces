#include <bits/stdc++.h>
#define int long long
#define float double
using namespace std;

template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
     for (auto &it : v)
          cin >> it;
     return istream;
}

template <typename Te>
ostream &operator<<(ostream &ostream, vector<Te> &v)
{
     for (auto &it : v)
     {
          cout << it << " ";
     }
     cout << endl;
     return ostream;
}
int power(int x,int y)
{
     if (y == 0)
          return 1;
     else if (y % 2 == 0)
          return power(x, y / 2) * power(x, y / 2);
     else
          return x * power(x, y / 2) * power(x, y / 2);
}
void solution(int n)
{
     if (n == 2)
     {
          cout<<0<<" "<<1<<endl;
          return;
     }
     
     int _power = log2(n-1);

     int l = power(2,_power);
     // cout<<_power<<"l\n";
     bool flag = true;
     for (int i = n-1; i >= 1; i--)
     {
          if (i == l-1 and flag)
          {
               flag = false;
               cout<<0<<" ";
               i++;
               continue;
          }
          
          cout<<i<<" ";
     }
     cout<<endl;
     
}

signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n;
          cin>>n; 
          solution(n);   
          t--;
     }
}