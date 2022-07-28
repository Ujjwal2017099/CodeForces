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
#define no "No"
#define yes "Yes"
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
     vi v(n);cin>>v;

     partial_sum(v.begin(),v.end(),v.begin());

     if(v[0]<0){
          cout<<no<<endl;
          return;
     }
     if(v[n-1]!=0){
          cout<<no<<endl;
          return;
     }
     rep(i,0,n-1){
          if(v[i]<0){
               cout<<no<<endl;
               return;
          }
     }
     rep(i,0,n-1){
          if(v[i]==0){
               rep(j,i+1,n-1){
                    if(v[j]!=0){
                         cout<<no<<endl;
                         return;
                    }
               }
               break;
          }
     }

     cout<<yes<<endl;
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