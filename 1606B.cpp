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
#define endl "\n"
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
int _pow(int a,int b){
     if(b == 0) return 1;

     int t = _pow(a,b/2);
     if(b%2) return a*t*t;
     else return t*t;
}
void solution(){
     int n,k;
     cin>>n>>k;
     if(k == 1){
          cout<<n-1<<endl;
          return;
     }
     int i = 0;
     if(k == n){
          int t = _pow(2, i);
          while(t < k){
               i++;
               t = _pow(2, i);
          }
          // if(t==n) i--;
          cout<<i<<endl;
     }
     else{
          int t = _pow(2,i);
          while (t < k){
               i++;
               t = _pow(2, i);
          }
          // cout<<i;
          int t1 = n-t;
          int j = t1/k;
          if(j*k < t1) j++;
          // while(k*j < t1){
          //      j++;
          // }
          cout<<i+j<<endl;
     }
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