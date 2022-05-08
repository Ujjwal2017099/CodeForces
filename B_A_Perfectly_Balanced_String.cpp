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
     map<char,int> f;
     int index = 0;

     rep(i,0,s.length()-1){
          if(f[s[i]] == 1) {index = i; break;}
          else f[s[i]] = 1; 
     }

     rep(i,index,s.length()-1){
          if(s[i] != s[i-index]) {cout<<"NO"<<endl;return;}
     }

     cout<<"YES"<<endl;
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