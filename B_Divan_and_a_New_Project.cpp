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
     for (auto &it : v)
     {
          cout << it << " ";
     }
     cout << endl;
     return ostream;
}

void solution(vector<int> vec)
{
     multimap<int,int> m; 
     int x = 0;
     m.insert(pair<int,int>(0,x));

     for (int i = 0; i < vec.size(); i++)
     {
          m.insert(pair<int,int>(vec[i] , i+1));
     }
     sort(vec.begin() , vec.end());
     int steps = 0;
     int ans[vec.size() + 1] = {0};
     int sign = -1;
     multimap<int,int>::reverse_iterator it = m.rbegin();
     int count = 2 , num = 1;
     for (int i = vec.size() - 1; i >= 0; i--)
     {
          int index = (*it).second;          
          ans[index] = sign*num;
          steps += 2*(*it).first * num;
          sign *= -1;
          it++;
          count--;
          if (count == 0)
          {
               num++;
               count = 2;;
          }
     }
     cout<<steps<<endl;
     for (int i = 0; i < vec.size() + 1; i++)
     {
          cout<<ans[i]<<" ";
     }
     cout<<endl;
     
}

signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n;
          cin>>n;

          vector<int> vec(n);
          cin>>vec;

          solution(vec);

          t--;
     }
}