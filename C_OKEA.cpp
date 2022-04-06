#include <bits/stdc++.h>
#define int long long
#define float double
using namespace std;

void display(vector<int> a)
{

     for (int i = 0; i < a.size(); i++)
     {
          cout << a.at(i) << " ";
     }
}

void check(int n, int k)
{
     int arr[n][k];

     if ((n % 2 != 0 and k % 2 == 0) or (n*k % 2 != 0 and k != 1))
     {
          cout << "NO" << endl;
          return;
     }

     else
     {
          cout << "YES" << endl;
          int val = 1;
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < k; j++)
               {
                    if (val > n * k)
                    {
                         val = 2;
                    }

                    arr[i][j] = val;
                    val += 2;
               }
          }

          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < k; j++)
               {
                    cout << arr[i][j] << " ";
               }
               cout << endl;
          }
     }
     // else if (!(n % 2 == 0 and k % 2 == 0))
     //      cout << "NO" << endl;
}
signed main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int n, k;
          cin >> n >> k;

          check(n, k);
          t--;
     }
}