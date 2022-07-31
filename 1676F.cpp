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
     int n,k;cin>>n>>k;
     vi v(n);cin>>v;

     map<int,int> mp;
     for(int i:v) mp[i]++;
     
     vi arr;
     for(auto i:mp){
          if(i.second >= k) arr.push_back(i.first);
     }
     if(arr.empty()){
          cout<<-1<<endl;
          return;
     }
     int l = arr[0],r = arr[0];
     int l1 = arr[0],r1 = arr[0];
     bool f=0;
     if(arr.size()==1){cout<<l1<<" "<<r1<<endl;return;}
     rep(i,0,arr.size()-2){
          if(arr[i+1]-arr[i]==1){
               if(!f){
                    l = arr[i];
                    f=1;
               }
               r=arr[i+1];
          }else {
               if(r1-l1 < r-l){
                    r1=r;l1=l;
               }
               f=0;
          }
     }
     if(r-l>r1-l1){
          l1=l;r1=r;
     }
     cout<<l1<<" "<<r1<<endl;
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