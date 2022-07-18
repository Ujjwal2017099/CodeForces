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
     int q1,q2;cin>>q1>>q2;
     int k1,k2;cin>>k1>>k2;
     int d1,d2;cin>>d1>>d2;

     if(d1<q1 and d2 <q2 and (k1>q1 or k2>q2)) cout<<no<<endl;
     else if(d1<q1 and d2 > q2 and (k1>q1 or k2<q2)) cout<<no<<endl;
     else if(d1>q1 and d2 < q2 and (k1<q1 or k2>q2)) cout<<no<<endl;
     else if(d1>q1 and d2 > q2 and (k1<q1 or k2<q2)) cout<<no<<endl;
     else cout<<yes<<endl;
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