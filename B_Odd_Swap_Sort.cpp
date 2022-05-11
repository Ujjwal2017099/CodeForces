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
#define endl "\n"
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
void solution(vi v,int n){
    int om = INT_MIN;
    int em = INT_MIN;

    for(int i : v){
         if(i%2 and i < om){cout<<"No"<<endl;return;}
         if(!(i%2) and i < em){cout<<"No"<<endl;return;}

         if(i%2) om = i;
         if(!(i%2)) em = i;
    }

    cout<<"Yes"<<endl;
}
signed main()
{
     jaldi bhai
     int t;
     cin >> t;

     while (t--)
     {
          int n;
          cin>>n;
          vi v(n);
          cin>>v;
          solution(v,n);
     }
}