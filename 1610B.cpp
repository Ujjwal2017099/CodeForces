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

     int l=0 , r = n-1;
     int f = -1;
     int inL = 0;
     int inR = 0;
     bool ok = true;
     while(l<=r){
          if(v[l] != v[r] and f == -1)
          {
               f = v[l];
               inL = l;
               inR = r;
               l++;
               continue;
          }else if(v[l] != v[r]){
               if(v[l] == f) l++;
               else if(v[r] == f) r--;
               else {ok = false;break;}
               continue;
          }
          l++;
          r--;
     }
     if(!ok){
          l = inL;
          r = inR;
          ok = true;
          f = -1;
          while(l <= r){
              if(v[l] != v[r] and f == -1)
               {
                    f = v[r];
                    r--;
                    continue;
               }else if(v[l] != v[r]){
                    if(v[l] == f) l++;
                    else if(v[r] == f) r--;
                    else {ok = false;break;}
                    continue;
               }
               l++;
               r--; 
          }
     }

     if(ok) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
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