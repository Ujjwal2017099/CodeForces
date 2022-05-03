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
int power(int x, int y)
{
     int res = 1;

     while (y)
     {
          if (y % 2 == 1)
               res = (res * x);

          y = y >> 1;

          x = (x * x);
     }
     return res;
}
void solution(string s1,string s2){
     sort(s2.begin(),s2.end());

     int countA = 0;

     for(char c:s2){
          if(c > 'a') break;

          countA++;
     }

     if(countA > 0 and s2.size() > 1){cout<<-1<<endl; return;}
     
     if(countA == 0){
          int n = s1.size();
          n = power(2,n);
          cout<<n<<endl;
          return;
     }

     cout<<1<<endl;
}
signed main()
{
     int t;
     cin >> t;

     while (t--)
     {
          string s1,s2;
          cin>>s1;
          cin>>s2;
          solution(s1,s2);
     }
}