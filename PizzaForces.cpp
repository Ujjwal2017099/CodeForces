#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long n;
        cin >> n;

        long long time = 0;

        if (n % 6 == 0)
        {
            time = (n / 6) * 15;
            break;
        }
        else if (n % 8 == 0)
        {
            time = (n / 8) * 20;
            break;
            // n = n/8;
        }
        else if (n % 10 == 0)
        {
            time = (n / 10) * 25;
            break;
            // n = n/10;
        }
        else if (n < 6)
        {
            time += 15;
            break;
        }
        else if (n < 8)
        {
            time += 20;
            break;
        }
        else if (n < 10)
        {
            time += 25;
            break;
        }

        else
        {
            if (n % 2)
                n++;

            n -= 11;
            if (n > 1)
                n = n - (n / 2);

            time = 30 + (n - 1) * 5;
            break;
        }

        cout << time << endl;
        t--;
    }
}