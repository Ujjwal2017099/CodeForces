#include <bits/stdc++.h>
using namespace std;
 
 
void findIJ(vector<int> vec)
{
  cout<<min_element(vec.begin(),vec.end())  - vec.begin() + 1<<" "<<max_element(vec.begin() , vec.end()) - vec.begin() + 1<<endl;
}
 
int main() {
  int t;
  cin>>t;
 
  while(t > 0)
    {
      int n;
      cin>>n;
 
      vector<int> vec;
      for(int i = 0 ; i<n ; i++)
        {
          int temp;
          cin>>temp;
          vec.push_back(temp);
        }
      findIJ(vec);
      t--;
    }
}
