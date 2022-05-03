#include <bits/stdc++.h>
#define int long long
#define float double
#define vi vector<int>
#define vf vector<float>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define rep(i,a,b) for(int i = a;i<=b;i++)
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
void solution(string s){
     int last = s[1] - 'a';
     int first = s[0] - 'a';

     int add;
     if(last > first) add = last;
     else add = last + 1;

     int prod = 25*first;
     cout<<prod + add<<endl;
     // cout<<first<<" "<<last<<endl;
}
signed main()
{
     int t;
     cin >> t;

     while (t--)
     {
          string s;
          cin>>s;
          solution(s);
     }
}