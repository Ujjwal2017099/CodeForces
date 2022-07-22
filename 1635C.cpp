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
     int n;
     cin>>n;
     unordered_map<int,int> cnt;
     vi v(n);
     for(int& i:v){
          cin>>i;
          cnt[i]++;
     }

     vector<pair<int,int>> s;
     rep(i,0,n-1){
          s.push_back({v[i],i+1});
     }
     sort(all(s),[&](pair<int,int> a,pair<int,int> b){
          if(a.first == b.first){
               return a.second < b.second;
          }
          return a.first < b.first;
     });
     
     vector<pair<int,int>> l(all(s));
     reverse(all(l));


     int j=0,k=0;
     unordered_map<int,bool> mp;
     int count = 0;
     vector<vi> ans;

     rep(i,0,n-3){
          int a = v[i];
          mp[i+1] = true;
          while(mp[s[j].second] ) j++;
          while(mp[l[k].second] or l[k].second < s[j].second) k++;


          v[i] = min(a,s[j].first - l[k].first);
          if(v[i] < a){
               count++;
               vi t = {i+1,s[j].second,l[k].second};
               ans.push_back(t);
          }
          // mp[a] = false;
          cnt[a]--;
     }

     if(!is_sorted(all(v))) {
          cout<<-1<<endl;
     }
     else{
          cout<<count<<endl;
          if(count==0) return;
          rep(i,0,ans.size()-1){
               cout<<ans[i];
          }
     }
     // cout<<v;
}
signed main()
{
     jaldi kar 
     int t;
     cin >> t;

     while (t--)
     {

          solution();
     }
}