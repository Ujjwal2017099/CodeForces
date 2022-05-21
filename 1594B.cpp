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
const int mod = 1e9 + 7;
#define endl "\n"
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
int _pow(int x, int y)
{
     int res = 1; 

     x = x % mod; 

     if (x == 0)return 0; 

     while (y > 0)
     {
          if (y & 1)
               res = (res * x) % mod;

          y = y >> 1; 
          x = (x * x) % mod;
     }
     return res;
}

void solution(){
     int n,k;
     cin>>n>>k;
     
     int s = log2(k);
     int in = _pow(2,s);
     int prev = _pow(n,s);
     // cout<<prev<<endl;
     if(in == k) {cout<<prev<<endl; return;}
     k -= in;
     while(k>0){
          s = log2(k);
          // cout<<in<<"a ";
          in = _pow(2,s);
          // cout<<in<<"b ";
          if(k == 1) {prev = (prev%mod + 1%mod)%mod; break;}
          if(k == 2) {prev = (prev%mod + n%mod)%mod; break;}
          if(k == 3) {prev = (prev%mod + (n+1)%mod)%mod; break;}
          if(k == 4) {prev = (prev%mod + _pow(n,2)%mod)%mod; break;}
          if(k ==in) {prev = (prev%mod + _pow(n,s)%mod)%mod; break;}
          
          prev = (prev%mod + _pow(n,s)%mod)%mod;
          k -= in;
     }

     cout<<prev<<endl;
}
// void solution()
// {
//      int n, k;
//      cin >> n >> k;

//      int s = log2(k);
//      vi arr(s + 1);
//      arr[0] = 1;

//      // rep(i,1,s){
//      //      arr[i] = ((n%mod)*(arr[i-1]%mod))%mod;
//      // }
//      // cout<<arr<<endl;

//      int ch = _pow(2, s);
//      if (ch == k)
//      {
//           cout << _pow(n, s) % mod << endl;
//           return;
//      }

//      vi ans(k + 1, 0);
//      ans[1] = 1;
//      ans[2] = n;
//      int t = k - 2;
//      int in = 2;
//      int i = 3;
//      int j = 1;
//      int index = _pow(2, in);
//      bool f = false;
//      while (t > 0)
//      {
//           if (i == index)
//           {
//                ans[i] = _pow(n, in) % mod;
//                f = true;
//                in++;
//                index = _pow(2, in);
//                j = 1;
//                i++;
//           }
//           else
//           {
//                if (f)
//                     ans[i] = (ans[index / 2] % mod + ans[j] % mod) % mod;
//                else
//                     ans[i] = (ans[in] % mod + ans[j] % mod) % mod;

//                i++;
//                j++;
//           }
//           t--;
//      }
//      cout << ans << endl;
// }
signed main()
{
     // jaldi bhai
     int t;
     cin >> t;

     while (t--)
     {

          solution();
     }
}