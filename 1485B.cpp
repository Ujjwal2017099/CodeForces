#include <bits/stdc++.h>
using namespace std;
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

template <typename T>
istream &operator>>(istream &istream, vector<T> &v){for (auto &it : v){cin >> it;}return istream;}
template <typename Te>
ostream &operator<<(ostream &ostream, vector<Te> &v){for (auto it : v){cout << it << " ";}cout << endl;return ostream;}

const int N = 1e5+10;
int dp[N];
int fun(vi& v,int k,int l,int r,int i){
     if(i>r) {
          return 0;
     }
     // if(dp[i]!=-1) return dp[i];
     int ans = 0;
     if(i==l) {
          ans += v[i]-1;
          if(i<r){
               ans += v[i+1] - v[i] - 1;
          }else{
               ans = k-1;
          }
     }
     else if(i<r){
          ans += v[i+1]-v[i-1]-2;
     }else{
          ans += k - v[i - 1] - 1;
     }
     dp[i] = ans;
     return ans + fun(v,k,l,r,i+1);
     // return ans;
}
void solution(vi& v,int& k){
     int l,r;cin>>l>>r;
     int ans = dp[r-1] - dp[l];
     if(l<r){
          ans += v[l+1]-2;
     }else{
          ans = k-1;
     }

     if(r!=l){
          ans += k-v[r-1]-1;
     }
     // else ans = k-1;

     cout<<ans<<endl;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     int n,k;
     cin >> n>>t>>k;
     vi v(n+1);
     rep(i,1,n) cin>>v[i];
     memset(dp,-1,sizeof(dp));
     fun(v,k,1,n,1);
     partial_sum(dp,dp+N,dp);
     while (t--) solution(v,k);
}