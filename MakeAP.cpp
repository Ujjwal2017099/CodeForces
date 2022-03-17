#include <bits/stdc++.h>
using namespace std;

bool checkAP(int a, int b, int c)
{
    if (b - a == c - b)
    {
        return true;
    }
    else
    {
        if (a != 1 && b != 1 && c != 1)
        {
            int d1 = b - a, d2 = c - b;

            if (d1 > d2)
            {
                int _c = b + d1;
                if (!(_c % c))
                {
                    return true;
                }
                int _a = b - d2;
                if (!(_a % a))
                {
                    return true;
                }
            }
            else
            {
                int _b = (a + c)/2;
                if (!(_b % b) && _b == (a + c) / 2.0)
                {
                    return true;
                }
            }
            return false;
        }
        else
        {
            int d1 = b - a, d2 = c - b;

            if (d1 > d2)
            {
                int _c = b + d1;
                if (!(_c % c) && _c > c)
                {
                    if (b - a == _c - b)
                        return true;
                }
                int _a = b - d2;
                if (!(_a % a) && _a > a)
                {
                    if (b - _a == c - b)
                        return true;
                }
            }
            else
            {
                int _b = (a + c)/2;
                if (!(_b % b) && _b > b && _b == (a + c) / 2.0)
                {
                    if (_b - a == c - _b)
                        return true;
                }
            }
            return false;
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (checkAP(a, b, c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }
}