#include <bits/stdc++.h>
using namespace std;

void check(vector<int> a, vector<int> b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < a.size() ; i++)
    {
        if (b[i] - a[i] <= 1 && b[i] - a[i] > -1)
        {
            continue;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;

        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            a.push_back(t);
        }

        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            b.push_back(t);
        }

        check(a, b);

        t--;
    }
}