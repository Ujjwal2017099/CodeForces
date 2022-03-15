#include<bits/stdc++.h>
using namespace std;

void display(vector<int> a)
{

    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " " ;
    }
    cout << endl;
}

void nice(vector<int> vec , int n)
{
    Label1:
    sort(vec.begin(),vec.end());
    int diff;

    for (int i = 0; i < (n); i++)
    {
        for (int j = i + 1; j < n ; j++)
        {
            diff = abs(vec[i] - vec[j]);
            if (binary_search(vec.begin(),vec.end(),diff))
            {
                continue;
            }
            else
            {
                vec.push_back(diff);
                n++;
                if (n > 300)
                {
                    cout<<"NO"<<endl;
                    return;
                }
                goto Label1;
            }
               
        }
    }

    cout<<"YES"<<endl<<n<<endl;
    display(vec);
    return;
    
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
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            vec.push_back(temp);
        }

        nice(vec,n);
        
        t--;
    }
    
}