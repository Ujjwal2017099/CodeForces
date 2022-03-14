#include<bits/stdc++.h>
using namespace std;

void check(string str)
{
    bool r = false,g = false , b = false;
    bool R = false,G = false , B = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'r')
        {
            r = true;
        }
        else if (str[i] == 'g')
        {
            g = true;
        }
        else if (str[i] == 'b')
        {
            b = true;
        }

        else if (str[i] == 'R' && r)
        {
            R = true;
        }
        else if (str[i] == 'G' && g)
        {
            G = true;
        }
        else if (str[i] == 'B' && b)
        {
            B = true;
        }
    }


    if (R && G && B)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
}

int main()
{
    int t;
    cin>>t;

    while (t > 0)
    {
        string str;
        cin>>str;

        check(str);
        t--;
    }
    
}