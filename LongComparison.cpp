#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        string x , _x;
        int  p;
        int  _p;

        cin>>x>>p;
        // fflush(stdin);
        cin>>_x>>_p;
        
        int first_length = x.length() + p;
        int second_length = _x.length() + _p;
        
        if (first_length > second_length)
        {
            cout<<">"<<endl;
        }
        else if (first_length < second_length)
        {
            cout<<"<"<<endl;
        }
        else
        {
            while (x.length() < _x.length())
            {
                x += '0';
            }
            while (x.length() > _x.length())
            {
                _x += '0';
            }


            if (x > _x)
            {
                cout<<">"<<endl;
            }
            else if (x < _x)
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<"="<<endl;
            }
            
            
            
            
        }
        
        
        t--;
    }
}