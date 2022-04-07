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

void solution(vector<int> p, string s)
{
     vector<int> vec = p;
     // cout<<vec;
     map<int, int> m;

     for (int i = 0; i < p.size(); i++)
     {
          m[p[i]] = i;
     }

     vector<int> zero;
     vector<int> one;

     for (int i = 0; i < p.size(); i++)
     {
          if (s[i] == '0')
          {
               zero.push_back(p[i]);
          }
          else
          {
               one.push_back(p[i]);
          }
     }

     sort(zero.begin(), zero.end());
     sort(one.begin(), one.end());
     sort(p.begin(), p.end());

     reverse(p.begin(), p.end());
     reverse(one.begin(), one.end());
     reverse(zero.begin(), zero.end());

     int ans[p.size()];

     int i ;
     for (i = 0; i < one.size(); i++)
     {
          vec[m[one[i]]] = p[i];
     }
     for (int j = 0; j < zero.size(); j++)
     {
          vec[m[zero[j]]] = p[i];
          i++;
     }

     cout<<vec;
}

signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n;
          cin >> n;

          vector<int> p(n);
          cin >> p;

          string s;
          cin >> s;

          solution(p, s);

          t--;
     }
}