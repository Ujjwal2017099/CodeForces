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
     vi v(n);
     cin>>v;

     int pos=0,neg=0,zro = 0;

     for(int i:v){
          if(i<0) neg++;
          else if(i>0) pos++;
          else zro++;
     }

     if(neg>2 or pos>2){
          cout<<no<<endl;
          return;
     }

     vi arr;

     unordered_map<int,bool> mp;
     for(int i:v){
          if(i!=0) arr.push_back(i);
          mp[i] = true;
     }
     if(zro) {
          arr.push_back(0);
          mp[0] = true;
     }

     rep(i,0,arr.size()-1){
          rep(j,i+1,arr.size()-1){
               rep(k,j+1,arr.size()-1){
                    if(!mp[arr[i] + arr[j] + arr[k]]){
                         cout<<no<<endl;
                         return;
                    }
               }
          }
     }

     cout<<yes<<endl;
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