#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
     for (auto &i : v)
          cin >> i;

     return istream;
}
template <typename Te>
ostream &operator<<(ostream &ostream, vector<Te> &v)
{
     for (auto &i : v)
          cout << i << " ";
     // cout<<endl;

     return ostream;
}

void solution(vector<int> v)
{
     vector<int> ans;
     if (v[0] == v.size())
     {
          ans.push_back(v[0]);
          reverse(v.begin(), v.end());
          v.pop_back();
          cout << ans << v << endl;
          return;
     }
     ans.push_back(v[v.size() - 1]);
     v.pop_back();
     reverse(v.begin(), v.end());

     cout << ans << v << endl;
}

void out()
{
     cout << -1 << endl;
}

int main()
{
     int t;
     cin >> t;
     while (t--)
     {
          int n;
          cin >> n;

          vector<int> v(n);
          cin >> v;

          v[0] == n or v[n - 1] == n ? solution(v) : out();
     }
}