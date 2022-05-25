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
#define kar cin.tie(NULL);
#define bhai cout.tie(NULL);
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
     vector<vi> st;
     vi cnt(2001, 0);
     vi __cnt(2001, 0);
     int n;
     cin >> n;
     vi v(n);
     cin >> v;
     int q;
     cin >> q;
     for (auto it : v)
     {
          cnt[it]++;
          __cnt[it]++;
     }
     // cout<<k<<"k";
     bool f = true;
     while (true)
     {
          st.push_back(v);
          rep(i, 0, v.size() - 1)
          {
               if (v[i] != cnt[v[i]]){
                    f = false;
                    break;
               }
          }
          if (f)
          {
               st.push_back(v);
               break;
          }
          f = true;
          rep(i, 0, v.size() - 1)
          {
               __cnt[v[i]]--;
               v[i] = cnt[v[i]];
               __cnt[v[i]]++;
          }
          cnt = __cnt;
     }
     // for(auto it:st) cout<<it;
     int n1 = st.size();
     rep(i, 0, q - 1)
     {
          int x,y;
          cin>>x>>y;
          if (y < st.size())
               cout << st[y][x-1] << endl;
          else
               cout << st[n1 - 1][x-1] << endl;
     }
}
signed main()
{
     jaldi kar bhai int t;
     cin >> t;

     while (t--)
     {
          solution();
     }
}