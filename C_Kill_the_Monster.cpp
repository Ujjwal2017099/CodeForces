#include <bits/stdc++.h>
#define int long long
#define float double
#define vi vector<int>
#define vf vector<float>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define rep(i,a,b) for(unsigned int i = a;i<=b;i++)
#define rrep(i,a,b) for(int i = a;i>=b;i--)
#define jaldi ios_base::sync_with_stdio(false);
#define bhai cin.tie(NULL);
#define all(sexy69) sexy69.begin(),sexy69.end()
#define endl "\n";
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
     unsigned int hc, dc;
     cin >> hc >> dc;
     int hm, dm;
     cin >> hm >> dm;
     unsigned int k, a, w;
     cin >> k >> w >> a;


     rep(i,0,k){
          dc += w*(k - i);
          hc += a *i;
          int sc = (hm + dc - 1) / (dc), sm = (hc + dm - 1) / dm;

          // cout<<dc<<" "<<hc<<" ";
          // cout<<sc<<" "<<sm<<endl;

          if(sc <= sm){cout<<"YES"<<endl;return;}

          dc -= w*(k-i);
          hc -= a*i;
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
          solution();
     }
}