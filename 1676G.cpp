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

int ans;
pairii dfs(vector<vi>& g,string& s,int in,int wcnt,int bcnt){
     if(s[in-1] == 'W') wcnt++;
     else bcnt++;
     for(int i:g[in]){
          pairii x = dfs(g,s,i,0,0);
          wcnt += x.first;bcnt += x.second;
     }
     if(wcnt == bcnt) ans++;
     return {wcnt,bcnt};
}

void solution(){
     int n;cin>>n;
     vi v(n+1);
     rep(i,2,n) cin>>v[i];
     string s;cin>>s;
     vector<vi> g(n+1);
     rep(i,2,n){
          g[v[i]].pb(i);
     }
     ans=0;
     pairii x = dfs(g,s,1,0,0);
     cout<<ans<<endl;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     cin >> t;

     while (t--) solution();
}