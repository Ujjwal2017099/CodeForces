#include <bits/stdc++.h>
#define int long long
#define float double
#define vi vector<int>
#define vf vector<float>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define rep(i, a, b) for (int i = a; i <= b; i++)
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
     for (auto it : v)
     {
          cout << it << " ";
     }
     cout << endl;
     return ostream;
}
void solution(vi vec)
{
     int i = 0, j = vec.size() - 1;
     int lSum = LLONG_MIN + vec.front(), rSum = LLONG_MIN + vec.back();
     int mx = 0;
     int count = 2;
     while (i < j)
     {
          if (lSum == rSum)
          {
               mx = count;
               i++;
               j--;
               lSum = LLONG_MIN + vec[i];
               rSum = LLONG_MIN + vec[j];
               count += 2;
          }
          if (lSum > rSum)
          {
               j--;
               rSum += vec[j];
               count++;
          }
          else if(rSum > lSum)
          {
               i++;
               lSum += vec[i];
               count++;
          }
     }

     cout << mx << endl;
}
signed main()
{
     int t;
     cin >> t;

     while (t--)
     {
          int n;
          cin >> n;
          vi vec(n);
          cin >> vec;
          solution(vec);
     }
}