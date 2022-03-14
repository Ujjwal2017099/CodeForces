#include <bits/stdc++.h>
using namespace std;

vector<int> swap(vector<int> vec , int n)
{
    if(n == 0)
        return vec;
    int temp = vec.at(n);
    vec.at(n ) = vec.at(n-1);
    vec.at(n-1) = temp;

    return vec;
}

void antiFibo(vector<int> vec, int n)
{
    reverse(vec.begin() , vec.end());
    // int count = n;
    while(n > 0)
    {
        for (vector<int>::iterator i = vec.begin() ; i < vec.end() ; i++)
        {
            cout<< *i << " ";
        }
        cout<<endl;
        n--;
        vec = swap(vec,n);
        // count --;
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
        vector<int> vec;
        
        for (int i = 0; i < n; i++)
        {
            vec.push_back(i+1);
        }
        
        antiFibo(vec, n);
        t--;
    }
}