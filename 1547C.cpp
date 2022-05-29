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
     for (auto &it : v)
          cin >> it;
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
     int k,n,m;
     cin>>k>>n>>m;

     vi p(n) , v(m);

     cin>>p;
     cin>>v;

     int lp = 0, lv = 0;
     vi ans(m+n,0);
     int in = 0;
     while(lp < p.size() and lv < v.size()){
          if(v[lv] > k and p[lp] > k) {cout<<-1<<endl;return;}
          if(v[lv] == 0) {k++;lv++;in++;}
          else if(p[lp] == 0) {k++ ; lp++;in++;}
          else if(v[lv] <= p[lp]){ans[in] = v[lv];lv++;in++;}
          else {ans[in] = p[lp];lp++;in++;}
     }
     while(lp < p.size()){
          if(p[lp] > k) {cout<<-1<<endl;return;}
          if(p[lp] == 0) {k++ ; in++;lp++;continue;}

          ans[in] = p[lp];
          lp++;
          in++;
     }
     while(lv < v.size()){
          if(v[lv] > k) {cout<<-1<<endl;return;}
          if(v[lv] == 0) {k++ ;in++; lv++;continue;}

          ans[in] = v[lv];
          lv++;
          in++;
     }
     cout<<ans;
}
signed main()
{
     // jaldi kar bhai
     int t;
     cin >> t;

     while (t--){
          solution();
     }
}