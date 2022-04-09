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

int gcd(int a, int b)
{
     if (a == 0)
     {
          return b;
     }
     return gcd(b % a, a);
}

int lcm(int a, int b)
{
     return (a * b) / gcd(a, b);
}

void solution(int n)
{
     if (n % 4 == 0)
     {
          for (int i = 0; i < 4; i++)
          {
               cout << n / 4 << " ";
          }
          cout << endl;
          return;
     }
     else
     {
          cout << 1 << " " << n - 3 << " " << 1 << " " << 1 << endl;
     }
}

signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n;
          cin >> n;

          solution(n);
          t--;
     }
}