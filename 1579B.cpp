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
     vi v(n);
     cin>>v;
     vector<vi> ans;
     vi t(3);
     bool f = true;
     int in = v.size()-1;
     rep(i,0,v.size()-1){
          if(is_sorted(all(v))) break;
          int l=0;
          int c = v[0];
          rep(j,0,in)
          {
               if(v[j]>c){
                    c=v[j];
                    l=j;
               }
          }
          if(l==in) in--;
          else{
               t[0] = l+1;
               t[1] = in+1;
               t[2] = 1;
               
               int a = v[l];
               v.erase(v.begin()+l);
               v.emplace(v.begin()+in,a);
               // cout<<l<<" "<<in<<"i "<<v;
               in--;
               ans.push_back(t);
               // return; 
          }
     }
     // cout<<v;
     int n1 = ans.size();
     cout<<n1<<endl;
     for(auto it : ans){
          cout<<it;
     }
}

signed main()
{
     jaldi bhai
     int t;
     cin >> t;

     while (t--)
     {

          solution();
     }
}