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
     int mx = LLONG_MIN;
     rep(i,0,n-1){
          mx = max(mx,v[i]);
     }

     int a = log2(mx);


     int an = v[0];
     rep(i,1,n-1){
          an &= v[i];
     }

     int prev = 31;
     while(k>=n){
          int a1=-1;
          rrep(j,prev-1,a+1){
               if((an&(1<<j))==0){a1=j;break;}
               if(a1!=-1) break;
          }
          if(a1==-1) break;

          prev = a1;
          an = (an|(1<<a1));
          k-=n;
     }

     rep(i,0,n-1){
          rrep(j,a,0){
               if((v[i]&(1<<j))==0) {
                    mp[j]++;
               }
          }
     }
     vi t;
     auto it=mp.rbegin();
     while(k>0 and it!=mp.rend()){
          if(it->second<=k){
               t.push_back(it->first);
               k-=it->second;
          }
          it++;
     }
     for(int i:t){
          an = (an|(1<<i));
     }
     cout<<an<<endl;
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