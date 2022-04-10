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

void solution(priority_queue<int> min, priority_queue<int> max)
{
     for (int i = 0; i < max.size() - 1; i++)
     {
          cout<<max.top()<<" "<<-1*min.top();
          max.pop();
          // min.pop();
          cout<<endl;
     }
     
}

    signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n;
          cin>>n;

          priority_queue<int> pq_max;
          priority_queue<int> pq_min;

          for (int i = 0; i < n; i++)
          {
               int temp;
               cin>>temp;
               pq_max.push(temp);
               pq_min.push(-1*temp);
          }
          
          solution(pq_min , pq_max);

          t--;
     }
}