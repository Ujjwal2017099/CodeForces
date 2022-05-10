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
void solution(string s, vs v)
{
     vector<int> b(s.length(), 0);
     map<string, bool> m;
     for (auto i : v)
     {
          m[i] = true;
     }
     rep(i, 0, s.length() - 1)
     {
          string t = s.substr(i, 1);
          // auto it = find(v.begin(),v.end(),t);

          if (m[t])
               b[i] = 1;
     }
     // cout<<b;
     int ans = 0;
     int cnt = 0;
     bool f = false;
     rep(i, 0, b.size() - 1)
     {
          if (b[i] == 1 and f)
          {
               cnt++;
               ans = max(ans, cnt);
               cnt = 0;
          }
          else if (b[i] == 1)
          {
               ans = max(cnt, ans);
               cnt = 0;
               f = true;
          }
          else
               cnt++;
     }
     // if(!f){ans = 0;}
     cout << ans << endl;
}
signed main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin >> t;

     while (t--)
     {
          int n;
          cin >> n;
          string s;
          cin >> s;
          int k;
          cin >> k;
          vs v(k);
          cin >> v;
          solution(s, v);
     }
}