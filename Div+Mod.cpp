#include <bits/stdc++.h>
using namespace std;

long int Function(long int x, long int a)
{
    long int f;

    f = (x / a) + x % a;

    return f;
}

long int calculateX(long int l, long int r, long int a)
{
    if (a>r)
    {
        return r;
    }
    
    if (a == 1)
    {
        return r;
    }
    if ((r / a - l / a) != 0)
    {
        long int num = a;
        long int temp = r/num;
        for (int i = temp; num < r; i++)
        {
            num = a * i;
        }

        if (num > r)
        {
            num = num - a;
            if (Function(r, a) > Function(num - 1, a))
            {
                return (r);
            }
            else
                return (num - 1);
        }

        else
            return (num - 1);
    }
    else
    {
        return r;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        long int l, r, a;
        cin >> l >> r >> a;

        long int x;
        x = calculateX(l, r, a);

        // cout << x;

        cout<<Function(x,a)<<endl;
        t--;
    }
}