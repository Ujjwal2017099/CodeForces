#include <bits/stdc++.h>
using namespace std;

void count(vector<int> vec)
{
    int k = 0;
    int y = *max_element(vec.begin(), vec.end());
    int temp_max = vec.back();

    while (temp_max != y)
    {
        vec.pop_back();
        if (vec.back() > temp_max)
        {
            temp_max = vec.back();
            k++;
        }
    }
    

    cout << k << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;

        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            vec.push_back(temp);
        }

        count(vec);
        t--;
    }
}