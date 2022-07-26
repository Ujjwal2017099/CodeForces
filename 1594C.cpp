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
     char c;cin>>c;

     string s;cin>>s;
     bool f = true;
     rep(i,0,n-1){
          if(s[i] != c){
               f=0;
               break;
          }
     }
     if(f){
          cout<<0<<endl;
          return;
     }
     int j = n-1;
     while(j>=0 and s[j]!=c)j--;
     
     if(j<0){
          cout<<2<<endl;
          cout<<n<<" "<<n-1<<endl;
          return;
     }
     if((j+1)*2>n){
          cout<<1<<endl<<j+1<<endl;
          return;
     }
     cout<<2<<endl<<n<<" "<<n-1<<endl;
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