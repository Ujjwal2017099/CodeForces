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
// const int w = 1e9 + 1;
template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
     for (auto &it : v)
          {cin >> it;}
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
     int n,k;
     cin>>n>>k;
     // map<int,bool> vec;
     // rep(i,1,n){
     //      int t;
     //      cin>>t;
     //      vec[t] = true;
     // }

     // vi ab;
     // int i=0;
     // int mx = 0;
     // for(auto it = vec.begin() ; it != vec.end();){
     //      mx = max(mx,it->first);
     //      if(i != it->first) ab.push_back(i);
     //      else it++;
     //      i++;
     // }
     // int x = mx;
     // bool f = ab.empty();
     // if(f){
     //      cout<<n+k<<endl;
     //      return;
     // }

     // // cout<<mx/2<<endl;
     // // cout<<ab;
     // int j = 0;
     // if(j<ab.size() and k--){
     //      int a = (mx + ab[j] + 2 -1)/2;
     //      mx = max(mx,a);
     //      vec[a] = true;
     //      // j++;
     // }

     // cout<<vec.size()<<endl;

     vi vec(n);
     cin>>vec;

     vi ab;
     int i = 0;
     int mx = 0;
     sort(all(vec));
     mx = vec.back();
     for(auto it = vec.begin() ; it != vec.end();){
          if(i != *it) {ab.push_back(i); break;}
          else it++;
          i++;
     }
     bool f = ab.empty();
     if(f){
          cout<<n+k<<endl;
          return;
     }
     int j = ab[0];
     // cout<<mx;
     if(k){
          int a = (mx + j + 2 -1)/2;

          auto it = find(all(vec),a);
          if(it != vec.end()){
               cout<<vec.size()<<endl;
               return;
          }
          vec.push_back(a);
          // cout<<a<<"a";
     }

     cout<<vec.size()<<endl;
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