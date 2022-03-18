#include <bits/stdc++.h>
using namespace std;

int i = 3;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int nextPrime()
{

    // Base case
    if (i <= 1)
        return 2;

    // int prime = i;
    bool found = false;

    // Loop continuously until isPrime returns
    // true for a number greater than n
    while (!found)
    {

        if (isPrime(i))
            found = true;
        i++;
    }

    return i - 1;
}

void FindGCD(int n)
{
    if (n % 2)
    {
        int a = 3, b, c = 1;
        b = n - (a + c);
        if ((a != b && b != c && a != c) && (a + b + c == n) && c == __gcd(a, b))
        {
            cout << a << " " << b << " " << c << endl;
            ::i = 3;
            return;
        }

        while (true)
        {
            a = nextPrime();
            b = n - (a + c);
            if ((a != b && b != c && a != c) && (a + b + c == n) && c == __gcd(a, b))
            {
                cout << a << " " << b << " " << c << endl;
                ::i = 3;
                return;
            }
        }
        
        // for (a = 1; a < n; a++)
        // {
        //     for (b = 1; b < n; b++)
        //     {
        //         c = __gcd(a, b);
        //         if ((a != b && b != c && a != c) && (a + b + c == n))
        //         {
        //             cout << a << " " << b << " " << c << endl;
        //             return;
        //         }
        //     }
        // }
    }
    else
    {
        int a = 2, b, c = 1;
        b = n - (a + c);

        cout << a << " " << b << " " << c << endl;
        return;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;

        FindGCD(n);

        // cout<<nextPrime()<<endl;
        ::i = 3;
        t--;
    }
}