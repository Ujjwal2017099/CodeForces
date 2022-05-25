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

map<int,bool> mp;
template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
     for (auto &it : v){
          cin >> it;
          mp[it] = true;
     }
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
int gcd(int a,int b){
     // cout<<a<<" "<<b<<endl;
     if(a==0) return b;

     if(b<a) return gcd(a%b,b);
     else return gcd(b%a,a);
}
void solution(){
     int n;
     cin>>n;
     vi v(n);
     cin>>v;

     vi el;
     for(auto it:mp){
          el.push_back(it.first);
     }
     reverse(all(el));
     // cout<<el;
     int t = 0;
     rep(i,1,el.size()-1){
          t = gcd(t,abs(el[i]-el[i-1]));
          // cout<<t<<endl;
     }

     if(t==0) t = -1;
     cout<<t<<endl;
}
signed main()
{
     jaldi bhai
     int t;
     cin >> t;

     while (t--)
     {
          solution();
          mp.clear();
     }
}