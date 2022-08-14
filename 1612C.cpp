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
     int k,x;cin>>k>>x;
     int l=1,r=2*k-1;
     int f = r;
     int mid;
     while(l<r){
          mid = (r+l)/2;
          int a = 0;
          if(mid>k){
               a = k*(k+1)/2 - (f-mid)*(f-mid+1)/2 + k*(k-1)/2;
          }else{
               a = mid*(mid+1)/2;
          }

          if(a < x) l=mid+1;
          else r = mid;
     }

     int a = (l+r)/2;
     
     cout<<a<<endl;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     cin >> t;

     while (t--) solution();
}