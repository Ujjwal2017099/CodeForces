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

void solution(){
     int n,m;cin>>n>>m;
     vector<string> v;
     v.push_back("shjvhgv");
     vector<vi> ans;
     rep(i,1,n){
          string t;cin>>t;
          t = "!" + t;
          v.pb(t);
     }
     if(v[1][1] == '1'){cout<<-1<<endl;return;}
     rep(i,1,n){
          rrep(j,m,2){
               if(v[i][j] == '1'){
                    ans.pb({i,j-1,i,j});
               }
          }
     }

     rrep(i,n,2){
          if(v[i][1] == '1'){
               ans.pb({i-1,1,i,1});
          }
     }
     cout<<ans.size()<<endl;
     for(auto i:ans) cout<<i;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     cin >> t;

     while (t--) solution();
}