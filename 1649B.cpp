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
     vi v(n);
     map<int,int> cnt;
     for(int& i:v){
          cin>>i;
          cnt[i]++;
     }
     int k=0;
     while(k<n){
          if(v[k]!=0) break;
          k++;
     }
     if(k==n){
          cout<<0<<endl;return;
     }
     vi arr;
     auto it = cnt.begin();
     int mx=0;
     while(it!=cnt.end()){
          // if(it->second>1){
               mx += it->first*it->second;
          // }
          it++;
     }
     auto rev = cnt.rbegin();
     while(rev != cnt.rend()){
          if(rev->second == 1){
               mx -= rev->first;
               break;
          }
          rev++;
     }
     it = cnt.begin();
     while(it!=cnt.end()){
          if(it->second==1 and it->first>mx){
               arr.push_back(it->first-mx);
          }
          it++;
     }
     if(arr.empty()){
          cout<<1<<endl;
          return;
     }
     sort(all(arr));
     int a = arr.back();
     partial_sum(all(arr),arr.begin());
     int b = arr.back()-a;
     if(a>b){
          cout<<a-b<<endl;
          return;
     }else{
          cout<<1<<endl;
          return;
     }
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