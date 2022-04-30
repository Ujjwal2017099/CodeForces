#include <bits/stdc++.h>
#define int long long
#define float double
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
void solution(int n,int r,int b){
     int f = n/(b+1);
     int max = f;
     int _b = b;
     string ans;
     for (int i = 1; i <= n and r>0 ; i++)
     {
          if(f == 0) {f = n/(b+1);ans += "B";_b--;continue;}
          f--;
          ans+="R";
          r--;
     }
     if(_b <= max){
          for(int i = 0 ; i < _b ; i++,_b--)
               ans = "B" + ans;
     }
     else{
          for (int i = 0; i < max ; i++, _b--)
               ans = "B" + ans;
     }
     int count = 2;
     while(_b != 0){
          string temp = ans.substr(0,max*count);
          // cout<<temp<<endl;
          ans.erase(0,max*count);
          for (int i = 0; i < max-1 and _b != 0; i++, _b--)
               ans = "B" + ans;
          ans = temp + ans;
          count += 2;
          // _b=0;
     }
     cout<<ans<<endl;
     // cout<<endl<<_b;
}
signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n,r,b;
          cin>>n>>r>>b;
          solution(n,r,b);
          t--;
     }
}