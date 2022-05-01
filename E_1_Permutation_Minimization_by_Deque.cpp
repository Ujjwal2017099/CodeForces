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
void solution(int n){
     deque<int> q;
     int a;
     cin>>a;
     q.push_back(a);
     n--;

     while(n--){
          cin>>a;
          if(a < q.front()) q.push_front(a);
          else q.push_back(a);
     }

     for(auto x : q){
          cout<<x<<" ";
     }
     cout<<endl;
}
signed main()
{
     int t;
     cin >> t;

     while (t--)
     {
          int n;
          cin>>n;
          solution(n);
     }
}