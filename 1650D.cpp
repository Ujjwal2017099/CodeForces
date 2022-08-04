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
     vi v(n+1);
     rep(i,1,n) cin>>v[i];
     bool o=1,e=1;
     rep(i,1,n){
          if(v[i] != i and i!=1) e=0;
          if(v[i] != i and i==1) o=0;
     }
     // if(!e and o) {cout<<-1<<endl;return;}

     vi a(n+1,0);
     vi in(n+1);
     rep(i,1,n){
          in[v[i]] = i;
     }
     rrep(i,n,1){
          if(in[i] != i){
               a[i] = in[i];
               int x = i - in[i];
               rep(j,1,i){
                    in[j] += x;
                    if(in[j] > i) in[j] -= i;
               }
          }
     }

     rep(i,1,n){
          cout<<a[i]<<" ";
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