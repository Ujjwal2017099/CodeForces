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
     for (auto it : v)
     {
          cout << it << " ";
     }
     cout << endl;
     return ostream;
}
void solution(vector<string> s)
{
     map<string, int> rep;
     int count = 0;
     for (int i = 0; i < s.size(); i++)
     {
          string str = s[i];
          for(auto c : rep)
          {
               // cout<<rep.size()<<endl;
               if (c.first[0] != s[i][0] and c.first[1] == s[i][1])
               {
                    str[0] = c.first[0];
                    count += rep[str];
               }
          }
          
          str = s[i];
          for(auto c : rep)
          {
               // cout<<rep.size()<<endl;
               if (c.first[1] != s[i][1] and c.first[0] == s[i][0])
               {
                    str[1] = c.first[1];
                    count += rep[str];
               }
          }
          rep[s[i]]++;
     }
     cout<<count<<endl;
}

signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n;
          cin >> n;
          vector<string> v(n);

          cin >> v;
          solution(v);
          // cout<<v;
          t--;
     }
}