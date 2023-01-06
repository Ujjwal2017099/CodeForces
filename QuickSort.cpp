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
     int n,k;cin>>n>>k;
     vi v(n); cin>>v;
     vi t(n+1);
     rep(i,0,n-1){
          t[v[i]] = i;
     }
     int cnt=0;
     int prev = 1;
     int f=0;
     rep(i,2,n){
          if(t[i] < t[i-1]){
               cnt = n-i+1;
               break;
          }
     }
     cout<<(cnt+k-1)/k<<endl;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     cin >> t;

     while (t--) solution();
}
