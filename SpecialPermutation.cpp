#include <bits/stdc++.h>
using namespace std;
void _display(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
void check(vector<int> vec,int a,int b)
{
    int first_half = INT_MAX;
    int second_half = INT_MIN;
    for (int i = 0; i < vec.size()/2 ; i++)
    {
        first_half = min(vec[i],first_half);
    }
    if (first_half != a)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        for (int i = vec.size()/2 ; i < vec.size() ; i++)
        {
            second_half = max(vec[i], second_half);
        }
        if (second_half != b)
        {
            cout<<-1<<endl;
            return;
        }
        else
        {
            _display(vec);
        }
        return;
        
    }
    
    
}
void check_permutation(int n, int a, int b)
{
    if (n == 2)
    {
        cout << a << " " << b << endl;
        return;
    }
    if (a ==1 && b == n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    if (n == 4 && a == (n/2 +1) && b == n)
    {
        cout<<-1<<endl;
        return;
    }
    
    if (a == b || a == n || a > (n / 2 + 1))
    {
        cout << -1 << endl;
        return;
    }
    if (a == (n / 2 + 1) && b < n / 2)
    {
        cout << -1 << endl;
        return;
    }
   

    vector<int> vec;
    vec.push_back(a);
    for (int i = n; i > 0; i--)
    {
        if (i == b)
        {
            continue;
        }
        if (i == a && i < n/2)
        {
            vec.push_back(b);
            continue;
        }
        else if(i == a)
        {
            continue;
        }
        
        vec.push_back(i);
    }

    if (vec.size() != n)
    {
        vec.push_back(b);
    }
    
    check(vec,a,b);
    return;
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n, a, b;
        cin >> n >> a >> b;

        check_permutation(n, a, b);
        t--;
    }
}