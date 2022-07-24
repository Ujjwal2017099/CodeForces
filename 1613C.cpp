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
     int n,h; cin>>n>>h;
     vi v(n); cin>>v;
     if(n>=h) {
          cout<<1<<endl;
          return;
     }
     if(n==1){
          cout<<h<<endl;
          return;
     }
     vi pq;

     rep(i,1,n-1){
          pq.push_back(v[i]-v[i-1]);
     }

     sort(all(pq));

     int ans =-1;

     int i = 0;
     int lin=0,rin=0;
     while(i<n-1){
          int a = pq[i];

          int temp = 0;
          rep(j,0,n-2){
               if(pq[j] >= a){
                    temp += a;
               }else{
                    temp += pq[j];
               }
          }
          temp += a;
          if(temp >= h){
               rin = i;
               lin = i-1;
               ans = a;
               break;
          }
          i++;
     }
     if(ans == -1){
          ans =  pq.back();
          int temp = 0;
          rep(j,0,n-2){
               if(pq[j] < ans) temp+=pq[j];
               else temp += ans;
          }

          temp += ans;
          ans += (h-temp);
          cout<<ans<<endl;
          return;
     }
     int l,r;
     if(lin<0){
          l = 1;
     }else{
          l = pq[lin];
     }
     r = pq[rin];
     // cout<<r;
     
     int mid;
     // cout<<l<<" "<<r;

     int pl=-1,pr=-1;
     while(l<r){
          if(l == pl and r == pr) break;
          pl = l;
          pr = r;
          mid = l + (r - l) / 2;
          // cout<<l<<" "<<r<<endl;
          int temp = 0;
          rep(j,0,n-2){
               if(pq[j] < mid) temp+=pq[j];
               else temp += mid;
          }

          temp += mid;

          if(temp > h) {r = mid ;}
          else {l = mid;}
     }
     

     rep(i,l,r){
          int temp = 0;
          // cout<<i<<" ";
          rep(j,0,n-2){
               if(pq[j] < i) temp+=pq[j];
               else temp += i;
          }
          temp += i;

          if(temp >= h){
               ans = i;
               break;
          }
     }
     // ans = l;
     cout<<ans<<endl;
}
signed main()
{
     // jaldi kar bhai
     int t;
     cin >> t;

     while (t--)
     {

          solution();
     }
}