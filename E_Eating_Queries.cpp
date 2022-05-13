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

// template <typename T>
// istream &operator>>(istream &istream, vector<T> &v)
// {
//      for (auto &it : v)
//           cin >> it;
//      return istream;
// }
template <typename T2>
istream &operator>>(istream &istream, vector<T2> &v)
{
     // int sum = 0;
     for (auto &it : v)
     {
          cin >> it;
          // sum += it;
     }
     // v.push_back(sum);
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
void binary(vi t, int &l, int &mid, int &r, int key)
{
     while (l < r)
     {
          if (t[mid] == key)
               return;

          if (t[mid] < key)
          {
               l = mid + 1;
               mid = l + (r - l) / 2;
          }
          else
          {
               r = mid - 1;
               mid = l + (r - l) / 2;
          }
     }
}
bool condition(int a, int b) { return a > b; }
void solution(vi c, vi q)
{

     // q.pop_back();
     // sort(all(q));
     int n = c.size();
     sort(c.begin(), c.begin() + n, condition);
     vi t(n);
     partial_sum(c.begin(), c.begin() + n, t.begin());
     // cout<<t;

     for (auto i : q)
     {

          int l = 0;
          int r = n - 1;
          int ans = -1;
          while (l <= r)
          {
               int mid = l + (r - l) / 2;

               if (t[mid] >= i)
               {
                    ans = mid + 1;
                    r = mid - 1;
               }
               else
                    l = mid + 1;
          }
          cout << ans << "\n";
     }
}
signed main()
{
     jaldi bhai int t;
     cin >> t;

     while (t--)
     {
          int n, q;
          cin >> n >> q;
          vi c(n);
          cin >> c;
          vi qu(q);
          cin >> qu;
          solution(c, qu);
     }
}

