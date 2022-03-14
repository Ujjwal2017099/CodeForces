#include<bits/stdc++.h>
using namespace std;

void display(vector<int> a)
{

    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout<<endl;
}

void countMin(vector<int> vec ,vector<bool> flag , int n)
{
    int count = 0;
    if (n == 2)
    {
        cout<<0<<endl;
        display(vec);
        return;
    }
    
    for (int i = 1; i < (n-1); i++)
    {
        if (vec[i] > vec[i-1] && vec[i] > vec[i+1])
        {
            if (flag[i-1] == true)
            {
                vec[i-1] = vec[i];
            }
            else
            {
                vec[i+1] = vec[i];
                count++;
                flag[i+1] = true;
            }
            
        }
        
    }

    cout<<count<<endl;
    display(vec);
    
}

int main()
{
    int t;
    cin>>t;

    while (t > 0)
    {
        int n;
        cin>>n;

        vector<int> vec;
        vector<bool> flag(n,false);

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            vec.push_back(temp);
        }

        countMin(vec,flag,n);
        t--;
    }
    
}