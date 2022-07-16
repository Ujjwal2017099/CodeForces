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
bool fun(vi& v){
     rrep(i,v.size()-1,0){
          if(v[i] == 1) return true;
     }

     return false;
}
void solution(){
     int n;cin>>n;
     vi v(n);cin>>v;
     sort(all(v),[&](int a,int b){
          return a>b;
     });
     bool f = 0;
     rep(i,1,n-1){
          if(v[i-1] - v[i]==1){f = fun(v);break;}
     }
     if(f){
          cout<<no<<endl;
          return;
     }
     cout<<yes<<endl;
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