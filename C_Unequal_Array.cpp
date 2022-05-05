#include <bits/stdc++.h>
#define int long long
#define float double
#define vi vector<int>
#define vf vector<float>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define rep(i,A,B) for(int i = A;i<=B;i++)
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
int max(int a,int b) {return a>b ? a : b; }

void solution(vi arr){
     int m = -1 , n = -1;

     rep(i,1,arr.size()-1){
          if(arr[i] == arr[i-1])
          {
               if(n == -1) n = i;

               m = i;
          }
     }
     if(m == n) cout<<0<<endl;

     else cout<<max(1,m-n-1)<<endl;
}
signed main()
{
     int t;
     cin >> t;

     while (t--)
     {
          int n;
          cin>>n;

          vi arr(n);
          cin>>arr;
          solution(arr);
     }
}