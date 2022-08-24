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
#define all(__) __.begin(),__.end()
#define endl "\n"
#define pb push_back
#define pairii pair<int,int>
#define pairif pair<int,float>
#define pairfi pair<float,int>
#define pairff pair<float,float>
#define pairib pair<int,bool>

using namespace std;
template <typename T>
istream &operator>>(istream &istream, vector<T> &v){for (auto &it : v){cin >> it;}return istream;}
template <typename Te>
ostream &operator<<(ostream &ostream, vector<Te> &v){for (auto it : v){cout << it << " ";}cout << endl;return ostream;}
vector<vi> ans;
vi v;
void fun(int i,vi& par,vb& vis)
{
     if( vis[i]){
          ans.pb(v);
          v.clear();
          return;
     }

     vis[i]=1;
     v.pb(i);
     fun(par[i],par,vis);
}
void solution(){
     int n;cin>>n;
     vi par(n+1);
     rep(i,1,n) cin>>par[i];

     int root = -1;
     rep(i,1,n) if(par[i]==i) {root = i;break;}

     vector<vi> g(n+1);
     rep(i,1,n){
          if(i==root) continue;
          g[par[i]].pb(i);
     }
     vi leaf;
     rep(i,1,n){
          if(g[i].empty()) leaf.pb(i);
     }
     vb vis(n+1,0);
     v.clear();ans.clear();

     for(int i:leaf){
          fun(i,par,vis);
     }
     cout<<ans.size()<<endl;
     for(auto i:ans){
          cout<<i.size()<<endl;
          rrep(j,i.size()-1,0){
               cout<<i[j]<<" ";
          }
          cout<<endl;
     }
     cout<<endl;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     cin >> t;

     while (t--) solution();
}