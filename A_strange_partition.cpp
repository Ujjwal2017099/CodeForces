#include <bits/stdc++.h>
#define ll long long
#define dd double
#define float dd
using namespace std;

void display(vector<int> a)
{

     for (int i = 0; i < a.size(); i++)
     {
          cout << a.at(i) << " ";
     }
}

void min_max_beauty(vector<int> vec, int x)
{
     ll min;
     ll max = 0;
     ll sum = 0;
     for (int i = 0; i < vec.size(); i++)
     {
          max += vec[i] / x;
          if (vec[i] % x)
          {
               max++;
          }
          sum += vec[i];
     }
     min = sum / x;

     if (sum % x != 0)
     {
          min++;
     }
     
     cout << min << " " << max << endl;
}
int main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n, x;
          cin >> n >> x;

          vector<int> vec;
          for (int i = 0; i < n; i++)
          {
               int temp;
               cin >> temp;
               vec.push_back(temp);
          }
          min_max_beauty(vec, x);
          t--;
     }
}
