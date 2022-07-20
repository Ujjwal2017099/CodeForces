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
          cout << it <<endl;
     }
     // cout << endl;
     return ostream;
}
void solution(){
     int n,m;cin>>n>>m;
     vs v(n);
     cin>>v;

     int k = 0;
     

     while(k<m){
          int j = n - 1;
          int in = n - 1;
          while (in >= 0 and v[in][k] != '.')
               in--;
          if(in <= -1){k++;continue;}
          while (j >= 0)
          {
               if (v[j][k] == 'o')
               {
                    in = j - 1;
                    while (in >= 0 and v [in][k] != '.')
                         in--;
                    if (in <= -1)
                         break;
               }
               if(in <= -1)break;
               if (v[j][k] == '*' and in > j)
               {
                    swap(v[j][k], v[in][k]);
                    in--;
               }
               j--;
          }
          k++;
     }
     cout<<v;
}
signed main()
{
     // jaldi kar bhai
     int t;
     cin >> t;

     while (t--)
     {

          solution();
     }
}