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
#define endl " \n"
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
     int n;cin>>n;
     vi v(n);cin>>v;
     int x=0;
     int ans = LLONG_MAX;
     while(x<n){
          int cnt = 0;
          vi t = v;
          v[x] = 0;
          rep(i,x+1,n-1){
               int k = v[i-1]/v[i] + 1;
               v[i] *= k;
               cnt += k;
          }
          rrep(i,x-1,0){
               int k = v[i+1]/v[i] + 1;
               v[i] *= k;
               cnt += k;
          }
          ans = min(ans,cnt);
          v = t;
          x++;
     }
     cout<<ans;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     // cin >> t;

     while (t--)
     {

          solution();
     }
}