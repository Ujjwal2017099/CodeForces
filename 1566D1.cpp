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
     int n,m;
     cin>>n>>m;

     vi v(m);
     cin>>v;

     // map<int,int> m;
     // for(auto it:v)m[it] = 0;

     int cnt = 0;

     rep(i,1,m-1){
          // bool f1 = false,f2 = false;
          rep(j,0,i-1){
               // if(v[j] == v[i]) {f1 = true;break;}
               if(v[j] < v[i]) {cnt++;}
          }
          // if(f1 and f2) cnt--;
          // f1 &= 0;
          // f2 &= 0;
     }

     cout<<cnt<<endl;
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