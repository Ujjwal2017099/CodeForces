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
int gcd(int a,int b){
     if(a==0) return b;

     if(a>b) return gcd(a%b,b);
     else return gcd(b%a,a);
}
int POW(int a,int n){
     if(n == 0) return 1;
     if(n == 1) return a;
     int t = POW(a,n/2);
     if(n&1) return t*t*a;
     else return t*t;
}
void solution(){
     int a,b,c;
     cin>>a>>b>>c;

     string s;
     int gd = POW(10,c-1) + 1;
     int x0 = POW(10,a-1);
     int y0 = POW(10,b-1);

     int n0 = x0/gd;
     int n1 = y0/gd;
     int x = n0*gd;
     int y = n1*gd;
     while(x0 - x > 0){
          x+=gd;
     }
     if(x%10 == 0){
          x += gd;
     }
     while(y0 - y > 0){
          y += gd;
     }
     if(y%10 == 0){
          y += gd;
     }

     if(x%y == 0 or y%x==0) y += gd;
     
     cout<<x<<" "<<y<<endl;
     // cout<<gcd(x,y)<<endl;
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