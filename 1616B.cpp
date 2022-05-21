#include <bits/stdc++.h>
#define int long long
#define float double
#define vi vector<int>
#define vf vector<float>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define rep(i,a,b) for(int i = a;i<=b;i++)
#define rrep(i,a,b) for(int i = a;i>=b;i--)
#define jaldi ios_base::sync_with_stdio(false);
#define bhai cin.tie(NULL);
#define all(sexy69) sexy69.begin(),sexy69.end()
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
          cout << it << endl;
     }
     cout << endl;
     return ostream;
}
void solution(){
     int n;
     cin>>n;
     string s;
     cin>>s;
     int in;
     rep(i,1,n-1){
          if(s[i] <= s[i-1]){in = i ;}
          else break;
     }

     string _1 , _2;

     _1 = s[0];
     _1 += _1;

     _2 = s.substr(0,in+1);
     string t = _2;
     reverse(all(t));
     _2 += t;

     if(s[0] <= s[1]) cout<<_1<<endl;

     else cout<<_2<<endl;
}
signed main()
{
     jaldi bhai
     int t;
     cin >> t;

     while (t--)
     {

          solution();
     }
}