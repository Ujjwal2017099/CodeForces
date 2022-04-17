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

void solution(vector<int> v,int n)
{
     int c = 0;
     int count = 0;
     sort(v.begin(),v.end());
     
     while (v.size() and c < v.back())
     {
          int inc = n-v.back();
          count++;
          v.pop_back();
          c += inc;
     }
     cout<<count<<endl;
}

signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n,k;
          cin>>n>>k;
          vector<int> v(k);
          cin>>v;

          solution(v,n);
          t--;
     }
}