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
     int n,k;
     cin>>n>>k;
     vi v(n);
     cin>>v;
     vi t = v;
     sort(all(t));
     map<int,int> m;
     int cnt = 1;
     m[v[0]] = 0;
     rep(i,1,n-1){
          m[v[i]] = i;
          if(v[i] < v[i-1]) cnt++;
     }
     rep(i,0,n-2){
          int a = m[t[i]];
          if(a+1 < n and v[a]<v[a+1] and v[a+1] != t[i+1]) cnt++;
     }
     // cout<<cnt<<endl;
     if(cnt > k) cout<<no<<endl;
     else cout<<yes<<endl;
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