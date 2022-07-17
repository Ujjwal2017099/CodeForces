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
     int n,x;cin>>n>>x;
     map<int,int> m;

     vi v(n);
     for(int& i:v){
          cin>>i;
          m[i]++;
     }
     priority_queue<int,vector<int>,greater<int>> pq(all(v));
     map<int,int> d;
     int k = (n+1)/2 -1;

     int i=0,cnt=0;
     while(!pq.empty()){
          int j = pq.top()*x;
          if(m[j] and !d[pq.top()]){
               m[j]--;
               d[j]++;
          }else if(d[pq.top()]){
               d[pq.top()]--;
          }else{
               cnt++;
          }
          i++;
          pq.pop();
     }
     // while(!pq.empty()){
     //      if(d[pq.top()]){
     //           d[pq.top()]--;
     //      }else{
     //           cnt++;
     //      }
     //      pq.pop();
     // }

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