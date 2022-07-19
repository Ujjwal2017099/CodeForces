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
void solution(){
     int a,b;cin>>a>>b;
     
     vi ans(log(b)+1,0);

     int i = log(b);

     while(a and b){
          int n1 = a%10,n2 = b%10;
          a /= 10;
          b/=10;
          if(n1<=n2){
               ans[i] = (n2-n1);
               i--;
          }else{
               n2 += (b%10)*10;
               if(n2 > n1 + 9){
                    cout<<-1<<endl;
                    return;
               }
               if(n2 < n1){
                    cout<<-1<<endl;
                    return;
               }
               b /= 10;
               ans[i] = n2-n1;
               i--;
          }
     }
     if(b==0 and a!=0){
          cout<<-1<<endl;
          return;
     }
     if(a==0 and b!=0){
          ans[i] = b;
     }
     
     int k=-1;

     rep(i,0,ans.size()-1){
          if(ans[i] != 0){
               k =i-1;
               break;
          }
     }
     if(k!=-1){
          ans.erase(ans.begin(),ans.begin()+k+1);
     }
     cout<<ans;
}
signed main()
{
     jaldi kar bhai
     int t=1;
     cin >> t;

     while (t--)
     {

          solution();
     }
}