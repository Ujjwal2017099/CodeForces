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
bool comp(pair<int,int> a,pair<int,int> b){
     return a.first < b.first;
}
void solution(){
     int n;
     cin>>n;
     vi a(n);
     cin>>a;
     vi b(n);
     cin>>b;
     vi b1 = b;
     vi a1 = a;
     vector<pair<int,int>> v;
     rep(i,0,n-1){
          rep(j,1,n-i-1){
               if(a[j] < a[j-1]){
                    swap(a[j],a[j-1]);
                    swap(b[j],b[j-1]);
                    pair<int, int> t = {j,j-1};
                    v.push_back(t);
               }
          }
     }
     if(!is_sorted(all(b))){
          rep(j,0,n-1){
               rep(i,1,n-j-1){
                    if(b[i] < b[i-1]){
                         if(a[i] != a[i-1]) {cout<<-1<<endl;return;}

                         swap(b[i],b[i-1]);
                         pair<int, int> t = {i, i - 1};
                         v.push_back(t);
                    }
               }
          }
     }
     // cout<<b;
     // cout<<endl<<a;
     cout<<v.size()<<endl;
     for(auto i:v)cout<<i.first+1<<" "<<i.second+1<<endl;
     // sort(all(v),comp);


     // for(auto it : v) cout<<it.first<<" "<<it.second<<endl;


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