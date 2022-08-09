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

int fun(vi &a, vi &b, int i_a, int i_b, vector<vi>& dp)
{
     if(i_a == a.size() and i_b == b.size()){
          return 0;
     }
     if(dp[i_a][i_b] != -1) return dp[i_a][i_b];
     int t1=0,t2=0;
     if(i_a < a.size()) {
          t1 = fun(a,b,i_a+1,i_b,dp) + a[i_a];
     }
     if(i_b < b.size()) {
          t2 = fun(a,b,i_a,i_b+1,dp) +b[i_b];
     }
     int z=0;
     return dp[i_a][i_b] = max(t1, max(t2, z));
}
void solution(){
     int n;cin>>n;
     vi a(n);cin>>a;
     int m;cin>>m;
     vi b(m);cin>>b;
     // map<pair<int, int>, bool> ch;
     // map<pair<int, int>, int> dp;
     vector<vi> dp(n+1,vi(m+1,-1));
     // memset(dp,-1,sizeof(dp));
     cout<<fun(a,b,0,0,dp)<<endl;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     cin >> t;

     while (t--) solution();
}