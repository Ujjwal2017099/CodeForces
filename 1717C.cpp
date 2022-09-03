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
#define all(__) __.begin(),__.end()
#define endl "\n"
#define pb push_back
#define pairii pair<int,int>
#define pairif pair<int,float>
#define pairfi pair<float,int>
#define pairff pair<float,float>
#define pairib pair<int,bool>

using namespace std;
template <typename T>
istream &operator>>(istream &istream, vector<T> &v){for (auto &it : v){cin >> it;}return istream;}
template <typename Te>
ostream &operator<<(ostream &ostream, vector<Te> &v){for (auto it : v){cout << it << " ";}cout << endl;return ostream;}

void solution(){
     int n;cin>>n;
     vi a(n);cin>>a;
     vi b(n);cin>>b;
     rep(i,0,n-1){
          if(a[i] > b[i]) {
               cout<<no<<endl;
               return;
          }
     }
     // rrep(i,n-2,0){
     //      if(a[i] < b[i] ){
     //           if (b[i] <= a[i + 1] + 1){
     //                a[i] = b[i];
     //           }else{
     //                a[i] = a[i+1]+1;
     //           }
     //      }
     // }
     rrep(i,n-2,0){
          if(b[i] > b[i+1]){
               if(b[i]-b[i+1] > 1 and a[i] != b[i]) {
                    cout<<no<<endl;
                    return;
               }
          }
     }
     if(b[n-1]-b[0] > 1 and (a[n-1]!=b[n-1])){
          cout<<no<<endl;
          return;
     }
     cout<<yes<<endl;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     cin >> t;

     while (t--) solution();
}