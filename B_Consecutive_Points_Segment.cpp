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
void solution(vector<int> x)
{
     x[0]++;
     for (int i = 1; i < x.size(); i++)
     {
          if(x[i]-x[i-1]==1)continue;
          if(x[i]-x[i-1]==2){x[i]--;continue;}
          else if(x[i] - x[i-1] >= 3){cout<<"NO"<<endl;return;}
          x[i]++;
     }
         cout<<"YES"<<endl;
}
signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n;
          cin >> n;
          vector<int> x(n);
          cin>>x;
          solution(x);
          t--;
     }
}