#include <bits/stdc++.h>
using namespace std;

int POW(int a)
{
     int power = 10;

     for (int i = 0; i < a - 1; i++)
     {
          power *= 10;
     }
     return power;
}

int calculatePower(int x, int y)
{
     if (x > y)
     {
          return -1;
     }
     int _x = x, _y = y;
     int count_x = 0, count_y = 0;
     for (int i = 0; _y > 0; i++)
     {
          if (_x > 0)
          {
               _x = _x / 10;
               count_x++;
          }
          _y = _y / 10;
          count_y++;
     }
     //  create power function of your own

     int power = x * POW( count_y - count_x);
     // its returning float type decreasing precision
     if (power > y)
     {
          power = power / 10;
     }

     return power;
}

void findK(int x, int y)
{
     int k = 0;
     int count_op = 0;

     if (x > y)
     {
          cout << y << endl;
          return;
     }

     int power;
     while (k < y)
     {
          power = calculatePower(x, y - k);
          // cout << power << endl;
          if (power == -1)
          {
               break;
          }

          while (k < y)
          {
               k += power;
               count_op++;
          }
          if (k > y)
          {
               k -= power;
               count_op--;
          }
          // cout << k << " ";

          if (k == y)
          {
               cout << count_op << endl;
               return;
          }
     }

     // cout << k << " " << count_op << endl;
     if (k > y)
     {
          k -= power;
          count_op--;
     }
     if (k == y)
     {
          cout << count_op << endl;
          return;
     }

     count_op += (y - k);
     cout << count_op << endl;
}

int main()
{
     int t;
     cin >> t;

     while (t > 0)
     {
          int x, y;
          cin >> x >> y;

          findK(x, y);
          t--;
     }
     return 0;
}
