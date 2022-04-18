#include <bits/stdc++.h>
#define int long long
#define float double
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
int three(int n , int i = 1)
{
     // cout<<"T"<<n<<" "<<i<<endl;
     return (n*i);
}
int one(int m)
{
     int ans = m%3 == 0 ? m/3 : m/3 + 1 ;
     return ans;
}
void two(int m)
{
     if(m%3 == 0) {cout<<(2*(m/3))<<endl; return;}
     else if((m + 1)%3 == 0) {cout<<(2*((m + 1)/3))<<endl; return;}

     cout<<(2 * ((m - 1) / 3) + 1)<<endl;
}
int ceil(int a,int b)
{
     float c = (a+b)/2.0;
     int c1 = (int)c;
     // cout<<a<<" "<<b;
     if(c == c1) return c1;
     else return (c1+1);
}
void solution(int n,int m)
{
     int ans = n==1 ? one(m) : m==1 ? one(n) : -1;
     if(ans != -1) {cout<<ans<<endl; return;}

     if(n == 2) {two(m) ; return;}
     else if(m == 2) {two(n) ; return;}

     if(n%3 == 0) {cout<<three(m,n/3)<<endl ; return;}
     else if(m%3 == 0) {cout<<three(n,m/3)<<endl ; return;}

     int base = one(n);
     if((m+1)%3 != 0){cout<<( three(n,(m-1)/3) + base)<<endl;return;}
     // else if(m==2){int temp = three(n,(m+1)); cout<<ceil(m-1,temp);}
     else{int temp = three(n,(m+1)/3); cout<<ceil(( three(n,(m-2)/3) + base),temp)<<endl;}
}
signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n,m;
          cin>>n>>m;
          solution(n,m);
          t--;
     }
}