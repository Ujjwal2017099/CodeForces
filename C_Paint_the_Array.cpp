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
#define bhai cin.tie(NULL);
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
     int n;
     cin>>n;
     vi even,odd,v;
     rep(i,1,n){
          int t;
          cin>>t;
          v.push_back(t);
          if(i%2) odd.push_back(t);
          else even.push_back(t);
     }
     
     int a = even[0];

     int _gd = a;
     rep(i,1,even.size()-1){
          _gd = __gcd(a,even[i]);
          a = _gd;
     }

     // rep(i,0,n-1){
     //      if(_gd % v[i] == 0) _gd = min(_gd,v[i]);
     // }

     rep(i,0,odd.size()-1){
          if(odd[i]%_gd == 0){goto Label1;}
     }
     cout<<_gd<<endl;
     return;

     Label1:

     vi temp = even;
     even = odd;
     odd = temp;
     int _a = even[0];

     int gd = _a;
     rep(i,1,even.size()-1){
          gd = __gcd(_a,even[i]);
          _a = gd;
     }

     // rep(i,0,n-1){
     //      if(gd % v[i] == 0) gd = min(gd,v[i]);
     // }
     // cout<<even;
     rep(i,0,odd.size()-1){
          if(odd[i]%gd == 0){cout<<0<<endl;return;}
     }
     cout<<gd<<endl;

}
signed main()
{
     jaldi bhai
     int t;
     cin >> t;

     while (t--)
     {

          solution();
     }
}