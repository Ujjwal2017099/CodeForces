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
void solution(vector<int> v, int m)
{
     if(v.size() >= m){cout<<"NO"<<endl;return;}

     int count = 0;
     int i = 0;

     while (i < v.size() and count <= m)
     {
          count += 2*v[i] + 1;

          if(i > 0 and v[i-1] <= v[i]) count -= v[i-1];
          else if(i > 0 ) count -= v[i];
          if (i < v.size() - 1 and count > m){ cout << "NO" << endl; return;}
          i++;
     }

     if(v[0] <= v.back()) count -= v[0];
     else count -= v.back();

     if(count > m) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
     
}
signed main()
{
     int t;
     cin >> t;
     while (t > 0)
     {
          int n, m;

          cin >> n >> m;
          vector<int> v(n);
          cin >> v;
          sort(v.begin(),v.end());
          solution(v, m);
          t--;
     }
}