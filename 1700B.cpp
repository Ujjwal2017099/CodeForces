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
          cout << it;
     }
     cout << endl;
     return ostream;
}
bool isPal(int a){
     string s = to_string(a);

     // cout<<s<<endl;
     int l = 0 , r  = s.length()-1;
     while(l<r){
          if(s[l] != s[r]) return false;
          l++;
          r--;
     }

     return true;
}
void solution(){
     int n;cin>>n;
     string s;cin>>s;

     int l = 0 , r = n-1;
     vi ans(n,9);

     // while(l<=r){
     //      int a = max(s[l],s[r]);
     //      if(a == 9) a++;
     //      a++;
     //      ans[l] = a;
     //      ans[r] = a;
     //      l++;
     //      r--;
     // }

     rep(i,0,n-1){
          ans[i] -= (s[i]-'0');
     }
     if(ans.front() != 0 and ans.back() != 0)
          {cout<<ans;return;}
     vi a(n+1,1);

     if(ans.front() != 0){
          rep(i,0,n-1) a[i] = 0;
     }
     rrep(i,n,1){
         if(a[i] < s[i-1]-'0')
         {
              a[i-1]--;
              a[i] = 10 + a[i];
              a[i] -= (s[i-1] - '0');
         }else{
              a[i] -= (s[i-1]-'0');
         }
     }
     
     vi a1(n);
     rep(i,0,n-1){
          a1[i] = a[i+1];
     }
     cout << a1;
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