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
#define bhai cin.tie(NULL);
#define all(sexy69) sexy69.begin(),sexy69.end()
#define A 'a'
#define B 'b'
#define C 'c'
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
int count(string s){
     int cnt = 0;
     rep(i,2,s.length()-1){
          if(s[i] == 'c' and s[i-1] == 'b' and s[i-2] == 'a') cnt++;
     }
     return cnt;
}
void solution(){
     int n,q;
     cin>>n>>q;
     string s;
     cin>>s;
     pair<int,char> m[q];
          // cout<<"a"<<endl;
     rep(i,0,q-1){
          int t;
          char c;
          cin>>t>>c;
          m[i].first = t;
          m[i].second = c;
     }
     int cnt = count(s);
     rep(i,0,q-1){
          int t = m[i].first - 1;
          if(t>=2){
               if(s[t] == C and s[t-1] == B and s[t-2] == A and m[i].second != C) cnt--;
          }
          if(t>=1 and t< n-1){
               if(s[t+1] == C and s[t] == B and s[t-1] == A and m[i].second != B) cnt--;
          }
          if(t>=0 and t < n-2){
               if(s[t+2] == C and s[t+1] == B and s[t] == A and m[i].second != A) cnt--;
          }
          
          if(t>=2){
               if(m[i].second == C and s[t-1] == B and s[t-2] == A and s[t] != C) cnt++;
          }
          if(t>=1 and t< n-1){
               if (m[i].second == B and s[t + 1] == C and s[t - 1] == A and s[t] != B) cnt++;
          }
          if(t>=0 and t < n-2){
               if(m[i].second == A and s[t+2] == C and s[t+1] == B and s[t] != A) cnt++;
          }
          
          s[t] = m[i].second;
          cout<<cnt<<endl;
     }
}
signed main()
{
     jaldi bhai
     int t=1;
     // cin >> t;

     while (t--)
     {

          solution();
     }
}