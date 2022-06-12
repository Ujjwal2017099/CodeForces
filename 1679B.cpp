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
unordered_map<int,bool> m;
bool ch = false;
int p = -1;
void two(vi& v,int& sum){
     int x;cin>>x;
     m.clear();
     p = x;
     ch = true;
     sum = x*v.size();
     cout<<sum<<endl;
     // for(int &i:v) i = x;
}
void one(vi& v,int& sum){
     int i,x;cin>>i>>x;
     if(!m[i-1] and ch) sum -= p;
     else sum -= v[i-1];
     m[i-1] = true;
     sum += x;
     v[i-1] = x;
     cout<<sum<<endl;
}
void solution(){
     int n,q;cin>>n>>q;
     vi v(n);cin>>v;
     int sum=0;
     for(int i:v) sum+=i;
     while(q--){
          int a;cin>>a;
          if(a==1) one(v,sum);
          else two(v,sum);
     }
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