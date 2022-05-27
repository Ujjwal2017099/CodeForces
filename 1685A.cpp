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
     int n;
     cin>>n;
     vi v(n);
     cin>>v;

     if(n&1) {cout<<no<<endl;return;}
     sort(all(v));
     // vi t = v;
     int l = 2 , r = n/2;
     bool ok = true;
     // cout<<v;
          // cout<<l<<" "<<r<<"r"<<endl;
     while(l<=r){
          if(v[l-1] == v[l+r-2]) {ok=false;break;}
          l++;
     }
     
     if(!ok) {cout<<no<<endl;return;}
     int k = n/2;
     cout<<yes<<endl;
     rep(i,0,n/2 -1){
          cout<<v[i]<<" "<<v[i+k]<<" ";
     }
     cout<<endl;
}
signed main()
{
     jaldi kar bhai
     int t;
     cin >> t;

     while (t--)
     {

          solution();
     }
}