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
void solution(vi v,int n,int k){
     map<int,bool> ex;
     for(int i:v){
          ex[i] = true;
     }

     rep(i,0,v.size()-1){
          v[i] -= k;
          if(ex[v[i]]){cout<<"YES"<<endl;return;}
          else ex[v[i]] = false;
     }

     cout<<"NO"<<endl;
}
signed main()
{
     jaldi bhai
     int t;
     cin >> t;

     while (t--)
     {
          int n,k;
          cin>>n>>k;
          vi v(n);
          cin>>v;
          solution(v,n,k);
     }
}