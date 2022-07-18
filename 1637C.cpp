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
     int e=0,o=0,o3_1=0,oc=0;
     rep(i,1,n-2){
          if(!(v[i]&1)){
               e+=v[i]/2;
          }else if(v[i]==1){
               o3_1++;
          }else{
               o+=(v[i]-2)/2;
               oc++;
          }
     }
     if(e==0 and o3_1 and oc==0){cout<<-1<<endl;return;}
     if(n==3 and e==0){cout<<-1<<endl;return;}

     int cnt=0;
     rep(i,1,n-2){
          cnt += v[i];
     }

     cnt -= o3_1 + oc;

     cout<<cnt/2 + o3_1 + oc<<endl;
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