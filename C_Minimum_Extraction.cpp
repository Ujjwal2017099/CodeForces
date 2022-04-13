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
bool logic(int i, int j) { return i > j; }

void solution(vector<int> v)
{
     int max = INT_MIN;
     bool flag = false;
     int back = 0;
     sort(v.begin(), v.end(), logic);
     while (v.size() > 1)
     {
          flag = true;
          if (v.back() > max)
               max = v.back();
          back += v.back();
          v.pop_back();
          v[v.size() - 1] -= back;
     }

     if (flag and v[0] > max) max = v[0];     
     else if (!flag)
     {
          cout<<v[0]<<endl;
          return;
     }
     
     cout << max << endl;
}
signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n;
          cin >> n;

          vector<int> v(n);
          cin >> v;

          solution(v);
          t--;
     }
}