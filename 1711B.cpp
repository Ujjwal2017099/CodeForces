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
int _min(int a,int b,vi& v){
     if(v[a] <= v[b]) return a;

     return b;
}
int _max(int a,int b,vi& v){
     if(v[a] > v[b]) return a;
     return b;
}
void solution(){
     int n,m;cin>>n>>m;
     vector<int> v(n+1);
     rep(i,1,n) cin>>v[i];
     vector<pairii> g;
     vi freq(n+1,0);
     rep(i,1,m){
          int a,b;cin>>a>>b;
          freq[a]++;freq[b]++;
          g.pb({_min(a, b,v), _max(a, b,v)});
     }
     if(!(m&1)) {cout<<0<<endl;return;}
     sort(all(g),[&](pairii a,pairii b){
          int x1 = a.first,x2 = a.second;
          int y1 = b.first,y2 = b.second;
          if(v[x1]==v[y1]) return v[x2]<v[y2];
          return v[x1]<v[y1];
     });
     
     int ans = INT_MAX;
     for(auto k:g){
          int i = k.first,j = k.second;
          if(freq[i]&1){ans = min(ans,v[i]);}
          if(freq[j]&1){ans = min(ans,v[j]);}
     }

     for(auto i:g){
          int a = i.first,b = i.second;
          if(!(freq[a]&1) and !(freq[b]&1)){ans = min(ans,v[a]+v[b]);}
     }
     cout<<ans<<endl;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     cin >> t;

     while (t--) solution();
}