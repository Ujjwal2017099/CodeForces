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
     int n = s.length()-1;
     int o = 0;
     int z = -1;
     rep(i,0,n)
     {
          if(s[i] == '0'){
               cout<<(i-o + 1)<<endl;
               return;
          }
          else if(s[i] == '1') o = i;
     }
     if(z == -1){
          cout<<n-o+1<<endl;
     }
     else cout<<n+1<<endl;
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