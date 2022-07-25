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
vi fun(int a,int b,int n){
     vi v(n);
     int j = n-a+1;
     int t = n-a;
     int k = 1;
     rep(i,0,n-1){
          if(i&1 && j<=n){
               v[i] = j;
               j++;
          }else if(j>=n){
               v[i] = t;
               t--;
          }else{
               v[i] = k;
               k++;
          }
     }

     return v;
}
vi fun2(int a,int b,int n){
     vi v(n);
     int j = b+1;
     int k = 1;
     rep(i,0,n-1){
          if(!(i&1)){
               v[i] = j;
               j++;
          }else if(b>0){
               v[i] = k;
               k++;
               b--;
          }else{
               v[i] = j;
               j++;
          }
     }

     return v;
}
void solution(){
     int n,a,b;cin>>n>>a>>b;
     int k = (n+1)/2;

     if(a>=k || b>=k){
          cout<<-1<<endl;
          return;
     }
     if(abs(a-b)>1){
          cout<<-1<<endl;
          return;
     }
     if(n&1 && a==b && a!=0 && a==k-1){
          cout<<-1<<endl;
          return;
     }
     
     vi ans(n);
     if(a==0 && b==0){
          rep(i,0,n-1) ans[i] = i+1;
     }
     else if(a>b){
          ans =  fun(a,b,n);
     }else if(a==b){
          ans = fun(a, b, n);
          swap(ans[n-1],ans[n-2]);
     }else{
          ans = fun2(a,b,n);
          // reverse(all(ans));
          
     }

     cout<<ans;
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