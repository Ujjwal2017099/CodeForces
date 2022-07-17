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
     int n,m;cin>>n>>m;

     vector<pair<int,int>> v;
     vector<pair<int,int>> v2;

     rep(i,1,m){
          int a,b;cin>>a>>b;
          v.push_back({a,b});
          v2.push_back({a,b});
     }

     // sort(all(v),[&](pair<int,int> a,pair<int,int> b){
     //      return a.first < b.first;
     // });

     rep(i,0,m-1){
          v[i].first = i+1;
     }

     sort(all(v),[&](pair<int,int> a,pair<int,int> b){
          return a.second < b.second;
     });
     sort(all(v2),[&](pair<int,int> a,pair<int,int> b){
          return a.second < b.second;
     });

     int sum = 0;
     vector<pair<int,int>> ans;
     rep(i,0,2*n-1){
          sum += v[i].second;
          ans.push_back({v[i].first,v2[i].first});
     }

     cout<<sum<<endl;
     sort(all(ans),[&](pair<int,int> a,pair<int,int> b){
          return a.second < b.second;
     });

     int i=0,j=2*n-1;

     while(i<j){
          cout<<ans[i].first<<" "<<ans[j].first<<endl;
          i++;
          j--;
     }
     // cout<<endl;
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