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

void solution(string s)
{
     vector<int> ans;
     int count = 0;
     while (!is_sorted(s.begin(), s.end()))
     {
          vector<int> one;
          vector<int> zero;
          for (int i = 0; i < s.length(); i++)
          {
               s[i] == '0' ? zero.push_back(i) : one.push_back(i);
          }
          reverse(zero.begin(), zero.end());
          int j = 0;
          for (int i = 0; i < zero.size() and j < one.size() and !is_sorted(s.begin(), s.end());)
          {
               if (zero[i] > one[j])
               {
                    ans.push_back(zero[i] + 1);
                    ans.push_back(one[j] + 1);
                    s[zero[i]] = '1';
                    s[one[j]] = '0';
                    i++,j++;
               }
               else j++;
          }
          sort(ans.begin(), ans.end());
          count++;
     }

     cout << count << endl;
     if(count == 0) return;
     cout << ans.size() << " " << ans;
}

signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n;
          cin >> n;
          string s;
          cin >> s;
          solution(s);
          t--;
     }
}