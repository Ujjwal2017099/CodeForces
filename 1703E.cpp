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
          cout << it <<" ";
     }
     cout << endl;
     return ostream;
}
void solution(){
     int n;cin>>n;
     vs v(n);
     cin>>v;
     vs v1(n,string(n,0));
     vs v2(n,string(n,0));
     vs v3(n,string(n,0));
     int i=0,j=0;
     while(i<n){
          j=0;
          while(j<n){
               v1[j][n-i-1] = v[i][j];
               j++;
          }
          i++;
     }

     i=0,j=0;
     while(i<n){
          j=0;
          while(j<n){
               v2[j][n-i-1] = v1[i][j];
               j++;
          }
          i++;
     }
     i=0,j=0;
     while(i<n){
          j=0;
          while(j<n){
               v3[j][n-i-1] = v2[i][j];
               j++;
          }
          i++;
     }
     // cout<<v1<<endl;
     // cout<<v2<<endl;
     // cout<<v3<<endl;

    i=0;
    vector<vi> v4(n,vi(n,0));
    while(i<n){
          j=0;
          while(j<n){
               if(v1[i][j]==v2[i][j] and v2[i][j]==v3[i][j]){
                    v4[i][j] = v1[i][j] - '0';
               }
               j++;
          }
          i++;
    }

//     rep(i,0,n-1) cout<<v4[i];
     vector<vi> v14(n,vi(n,0));
     vector<vi> v24(n,vi(n,0));
     vector<vi> v34(n,vi(n,0));
     i=0,j=0;
     while(i<n){
          j=0;
          while(j<n){
               v14[j][n-i-1] = v4[i][j];
               j++;
          }
          i++;
     }

     i=0,j=0;
     while(i<n){
          j=0;
          while(j<n){
               v24[j][n-i-1] = v14[i][j];
               j++;
          }
          i++;
     }
     i=0,j=0;
     while(i<n){
          j=0;
          while(j<n){
               v34[j][n-i-1] = v24[i][j];
               j++;
          }
          i++;
     }
     vector<vi> v44(n,vi(n,3));
     i=0;
    while(i<n){
          j=0;
          while(j<n){
               v44[i][j] = v14[i][j]|v24[i][j]|v34[i][j]|v4[i][j];
               j++;
          }
          i++;
    }

//     rep(i,0,n-1)cout<<v14[i];
//     cout<<endl;
//     rep(i,0,n-1)cout<<v24[i];
//     cout<<endl;
//     rep(i,0,n-1)cout<<v34[i];
//     cout<<endl;
//     rep(i,0,n-1)cout<<v44[i];
//     cout<<endl;

     i=0;
     int cnt=0;
     while(i<n){
          j=0;
          while(j<n){
               if(v[i][j] - '0' != v44[i][j]) cnt++;
               j++;
          }
          i++;
     }

     cout<<cnt<<endl;
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