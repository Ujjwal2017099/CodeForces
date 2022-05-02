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

int search(int i,vi two,map<int,int> in){
     int t = in[i];

     if(t == two.size() - 1) return two.front();

     return two[t+1];
}
void solution(int n,string s){
     vs mat(n,string(n,'='));

     vi two;
     map<int,int> in;
     rep(i,0,n-1){
          if(s[i] == '2') {
               two.push_back(i);
               in[i] = two.size()-1;
          }
     }
     if(two.size()==2 or two.size()==1){cout<<"NO"<<endl; return;}
     
     rep(i,0,n-1)
     {
          mat[i][i] = 'X';
     }

     rep(i,0,n-1){
          int index;
          if(s[i] == '2'){
               index = search(i,two,in);
               mat[i][index] = '+';
               mat[index][i] = '-';
          }
          
     }
     cout<<"YES"<<endl;
     rep(i, 0, n - 1)
     {
          cout << mat[i]<< endl;
     }

}
signed main()
{
     int t;
     cin >> t;

     while (t--)
     {
          int n;
          string s;
          cin>>n;
          cin>>s;
          solution(n,s);
     }
}