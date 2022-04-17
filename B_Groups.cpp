#include <bits/stdc++.h>
#define int long long
#define float double
using namespace std;

template <typename T>
istream &operator>>(istream &istream, vector<vector<T>> &v)
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

void solution(int arr[][5], int n)
{

     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j < 5; j++)
          {
               if (i xor j)
               {
                    int d1 = i;
                    int d2 = j;
                    int g1 = 0, g2 = 0, g = 0;

                    for (int k = 0; k < n; k++)
                    {
                         if (arr[k][d1])
                              g1++;
                         if (arr[k][d2])
                              g2++;
                         if (!arr[k][d1] and !arr[k][d2])
                              g++;
                    }
                    if (g1 >= n / 2 and g2 >= n / 2 and g == 0)
                    {
                         cout << "YES" << endl;
                         return;
                    }
               }
          }
     }
     cout << "NO" << endl;
}

signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n;
          cin >> n;

          int arr[n][5];

          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < 5; j++)
               {
                    cin >> arr[i][j];
               }
          }

          solution(arr, n);
          t--;
     }
}