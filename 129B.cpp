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
     vector<pair<vi,bool>> v(n+1);
     rep(i,1,m){
          int a,b;cin>>a>>b;
          v[a].first.push_back(b);v[a].second = true;
          v[b].first.push_back(a);v[b].second = true;
     }

     bool f = 1;
     int cnt = 0;
     priority_queue<int> in;
     while(f){
          f = 0;
          rep(i,1,v.size()-1){
               if(v[i].first.size()==1 and v[i].second){
                    in.push(i);
               }
          }

          if(!in.empty()){
               f = 1;
               cnt++;
               // cout << cnt;
               while(!in.empty()){
                    int a = in.top();
                    int b = v[a].first[0];
                    // cout<<a<<" ";
                    v[a].second = false;
                    in.pop();
                    rep(j,0,v[b].first.size()-1){
                         if(v[b].first[j] == a){
                              v[b].first.erase(v[b].first.begin()+j);
                              break;
                         }
                    }
               }
          }
               
     }
     cout<<cnt;

}
signed main()
{
     // jaldi kar bhai
     int t=1;
     // cin >> t;

     while (t--)
     {
          solution();
     }
}