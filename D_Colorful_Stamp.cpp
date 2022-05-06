#include <bits/stdc++.h>
#define int long long
#define float double
#define vi vector<int>
#define vf vector<float>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define rep(i,a,b) for(int i = a;i<=b;i++)
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
bool valid(int r,int b){
     if(r > 0 and b==0) return false;
     if(b > 0 and r==0) return false;

     return true;
}
void solution(string s){
     int r=0,b=0;
     bool ch = true;

     for(char c:s){
          if(c == 'R') r++;
          else if(c == 'B') b++;
          else{
               ch = ch and valid(r,b);
               r=0;b=0;
          }
     }

     ch = ch and valid(r,b);

     if(ch) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
}
signed main()
{
     int t;
     cin >> t;

     while (t--)
     {
          int n;
          cin>>n;
          string s;
          cin>>s;
          solution(s);
     }
}