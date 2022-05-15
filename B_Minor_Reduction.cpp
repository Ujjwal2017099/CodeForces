#include <bits/stdc++.h>
#define int long long
#define float double
#define vi vector<int>
#define vf vector<float>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define jaldi ios_base::sync_with_stdio(false);
#define bhai cin.tie(NULL);
#define all(sexy69) sexy69.begin(), sexy69.end()
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
void solution()
{
     string s;
     cin >> s;
     int index1, index2;
     int max_sum = 0;
     rrep(i,s.length() - 1,1)
     {
          int a = s[i] - 48, b = s[i - 1] - 48;
          if (max_sum <= a + b and a+b > 9)
          {
               max_sum = a + b;
               index1 = i - 1;
               index2 = i;
               break;
          }
     }
     
     string str = to_string(max_sum);
     if (max_sum > 9)
     {
          s[index1] = str[0];
          s[index2] = str[1];
     }
     else
     {
          int a = s[0] - 48;
          int b = s[1] - 48;

          a += b;
          string t = s.substr(2, s.length());
          t = to_string(a) + t;
          s = t;
     }

     cout << s <<endl;
}
signed main()
{
     jaldi bhai int t;
     cin >> t;

     while (t--)
     {

          solution();
     }
}