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
#define kar cin.tie(NULL);
#define bhai cout.tie(NULL);
#define no "NO"
#define yes "YES"
#define all(sexy69) sexy69.begin(),sexy69.end()
using namespace std;

template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
     for (auto &it : v){
          cin >> it;
     }
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
     int n,m;
     cin>>n>>m;

     vs v(n);
     cin>>v;

     vs _ = v;
     
     rep(it,0,n-1){
          rep(i,0,m-1){
               if(i&1) {char c = 'Z' - (_[it][i] - 'A');_[it][i] = c;}
          }
     }
     map<string,int> M;
     rep(i,0,n-1) M[_[i]] = i + 1;

     sort(all(_));
     for(auto it:M) cout<<it.second<<" ";
     // cout<<_;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     // cin >> t;

     while (t--)
     {

          solution();
     }
}