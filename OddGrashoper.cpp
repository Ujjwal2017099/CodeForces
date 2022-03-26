#include <bits/stdc++.h>
using namespace std;

void hop(long long int x, long long int n)
{
    long long int sign, count_4;
    if (x % 2 == 0)
    {
        sign = 1;
    }
    else
    {
        sign = -1;
    }

    if (n % 2 == 0)
    {
        count_4 = n / 4;
    }

    else
    {
        count_4 = (n + 1) / 4;
    }

    long long ans = sign * count_4 * 4 + x;
    if ((n + 1) % 4 == 0)
    {
        cout << ans << endl;
        return;
    }
    else if (n % 2 == 0 && n % 4 == 0)
    {
        if (ans % 2 == 0)
        {
            ans -= n;
            cout << ans << endl;
            return;
        }
        else
        {
            ans += n;
            cout << ans << endl;
            return;
        }
    }
    else if (n % 2 == 0)
    {
        if (ans % 2 == 0)
        {
            ans -= 2 * n - 3;
            ans +=  n ;
            cout << ans << endl;
            return;
        }
        else
        {
            ans += 2 * n - 3;
            ans -=  n ;
            cout << ans << endl;
            return;
        }
    }
    else
    {
        if (ans % 2 == 0)
        {
            ans -= 2*n-1;
            cout << ans << endl;
            return;
        }
        else
        {
            ans += 2*n-1;
            cout << ans << endl;
            return;
        }
        
    }
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        long long int x, n;
        cin >> x >> n;

        hop(x, n);

        t--;
    }
}