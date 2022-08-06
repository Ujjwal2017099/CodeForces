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
     int n;cin>>n;
     vi v(n);cin>>v;

     sort(all(v));
     vi ch(n+1,0);
     vi t1;
     vi t2;
     rep(i,0,n-1){
          if(v[i] > n){
               t1.pb(v[i]);
               continue;
          }
          else if(ch[v[i]]){
               t1.pb(v[i]);
          }
          else if(v[i] <=n) ch[v[i]] = 1;
     }
     if(t1.empty()){
          cout<<0<<endl;return;
     }
     rep(i,1,n){
          if(ch[i]==0) t2.pb(i);
     }
     rep(i,0,t1.size()-1){
          if(t1[i] == 1){cout<<-1<<endl;return;}
          if(t1[i]&1){
               t1[i] = t1[i]/2;
          }else{
               t1[i] = t1[i]/2 - 1;
          }
     }
     sort(all(t2));
     // sort(all(t2));
     // cout<<t2<<t1;
     unordered_map<int,bool> mp;
     rrep(i,t1.size()-1,0){
          if(t1[i] < t2[i]){cout<<-1<<endl;return;}
     }
     cout<<t1.size()<<endl;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     cin >> t;

     while (t--) solution();
}