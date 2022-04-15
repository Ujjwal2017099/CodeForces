#include<bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    int t;
    cin>>t;
 
    while (t--)
    {
        int n,s;
        cin>>n>>s;
 
        if(n*n > s) {cout<<0<<endl; continue; }
        else if(n==1) {cout<<s<<endl; continue; }
        int max_nn = s/(n*n);
 
        while (!(max_nn == n+1) and (n*n - max_nn < n and max_nn >= 0))
        {
            max_nn--;
        }
        cout<<max_nn<<endl;        
    }
    
}
