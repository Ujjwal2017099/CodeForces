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
#define endl "\n"
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
void solution(){
     int n;
     cin>>n;
     vi v(n);
     cin>>v;
     map<int,bool> m;
     map<int,vi> index;
     bool f = false;

     rep(i,0,n-1){
          if(m[v[i]]) f = true;
          index[v[i]].push_back(i);
          m[v[i]] = true;
     }

     if(!f) {cout<<-1<<endl;return;}

     int mn = LLONG_MAX;
     for(auto it : index)
     {
          vi vec = it.second;
          rep(i,1,vec.size()-1) mn = min(vec[i]-vec[i-1],mn);
     }

     cout<<n-mn<<endl;
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