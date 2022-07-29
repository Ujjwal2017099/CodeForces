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
     int n;cin>>n;
     vi v(n);cin>>v;
     for(int& i:v){
          i%=10;
     }
     // sort(all(v));

     unordered_map<int,int> mp;
     rep(i,0,9) mp[i] = 0;
     for(int i:v){
          mp[i]++;
     }
     // auto it = mp.begin();
     // while (it!=mp.end())
     // {
     //      cout<<it->first<<" "<<it->second<<endl;
     //      it++;
     // }
     // cout<<v;
     if(mp[3]>=1 and mp[0]>=2) {cout<<yes<<endl;return;}
     if(mp[2]>=1 and mp[1]>=1 and mp[0]>=1){cout<<yes<<endl;return;}
     if(mp[1]>=3){cout<<yes<<endl;return;}

     if(mp[9]>=1){
          if(mp[4]>=1 and mp[0]>=1) {cout<<yes<<endl;return;}
          if(mp[3]>=1 and mp[1]>=1) {cout<<yes<<endl;return;}
          if(mp[2]>=2) {cout<<yes<<endl;return;}
          if(mp[7]>=2) {cout<<yes<<endl;return;}
          if(mp[8]>=1 and mp[6]>=1){cout<<yes<<endl;return;}
     }     
     if(mp[8]>=1){
          if(mp[5]>=1 and mp[0]>=1) {cout<<yes<<endl;return;}
          if(mp[4]>=1 and mp[1]>=1) {cout<<yes<<endl;return;}
          if(mp[3]>=1 and mp[2]>=1) {cout<<yes<<endl;return;}
     }
     if(mp[7]>=1){
          if(mp[6]>=1 and mp[0]>=1) {cout<<yes<<endl;return;}
          if(mp[5]>=1 and mp[1]>=1) {cout<<yes<<endl;return;}
          if(mp[4]>=1 and mp[2]>=1) {cout<<yes<<endl;return;}
          if(mp[3]>=2) {cout<<yes<<endl;return;}
     }
     if(mp[9]>=2){
          if(mp[5]>=1){cout<<yes<<endl;return;}
     }
     if(mp[8]>=2 and mp[7]>=1) {cout<<yes<<endl;return;}
     if(mp[6]>=2 and mp[1]>=1) {cout<<yes<<endl;return;}
     if(mp[6]>=1){
          if(mp[5]>=1 and mp[2]>=1) {cout<<yes<<endl;return;}
          if(mp[3]>=1 and mp[4]>=1) {cout<<yes<<endl;return;}
     }
     if(mp[5]>=1){
          if(mp[4]>=2) {cout<<yes<<endl;return;}
          if(mp[5]>=2 and mp[3]>=1) {cout<<yes<<endl;return;}
     }
     cout<<no<<endl;
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