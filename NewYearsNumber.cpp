# include<bits/stdc++.h>
using namespace std;
 
void check(int n)
{
  int first = n%10;
 
  int sum = first*2021;
 
  if(n==sum)
  {
    cout<<"YES"<<endl;
  }
  else if(sum < n and (n-sum)%2020 == 0)
  {
      cout<<"YES"<<endl;
  }
  else{
    int a = n/2021,b=0;
    sum = a*2021 + b*2020;
    while(sum < n and a >= 0 )
    {
      b++;
      sum = a*2021 + b*2020;
      if(sum > n)
      {
        a--;
        sum = a*2021 + b*2020;
      }
    }
    if(sum == n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}
 
int main()
{
  int t;
  cin>>t;
 
  while(t > 0)
    {
      int n;
      cin>>n;
 
      check(n);
      t--;
    }
}
