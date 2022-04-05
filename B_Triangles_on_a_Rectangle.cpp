#include<iostream>
#include<vector>
#define int long long
#define float double
using namespace std;

void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
}

void calculate_area(int w,int h,vector<int> x1, vector<int> x2, vector<int> y1, vector<int> y2)
{
     float max_area = 0;
     int x1_diff = x1.back() - x1[0];
     int x2_diff = x2.back() - x2[0];
     int y1_diff = y1.back() - y1[0];
     int y2_diff = y2.back() - y2[0];

     if (x1_diff > x2_diff)
     {
          max_area = abs(x1[0]*(0-h) + x1.back()*(h-0)) ;
          max_area = max_area/2;
     } 
     else
     {
          max_area = abs(x2[0] * (h - 0) + x2.back() * (0 - h));
          max_area = max_area / 2;
     }

     if (y1_diff > y2_diff)
     {
          float area = abs(w*(y1[0] - y1.back()));
          area = area/2;
          max_area = max(max_area,area);
     }
     else
     {
          float area = abs(w * (y2[0] - 0) + w * (0 - y2.back()));
          area = area / 2;
          max_area = max(max_area, area);
     }
     int ans = max_area * 2;

     cout<<ans<<endl;
}

signed main()
{
     int t;
     cin>>t;
     while (t > 0)
     {
          int w,h;
          cin>>w>>h;
          int kx1;
          cin>>kx1;

          vector<int> x1;
          for (int i = 0; i < kx1; i++)
          {
               int temp;
               cin>>temp;
               x1.push_back(temp);
          }
          
          int kx2;
          cin>>kx2;

          vector<int> x2;
          for (int i = 0; i < kx2; i++)
          {
               int temp;
               cin>>temp;
               x2.push_back(temp);
          }
          
          int ky1;
          cin>>ky1;

          vector<int> y1;
          for (int i = 0; i < ky1; i++)
          {
               int temp;
               cin>>temp;
               y1.push_back(temp);
          }

          int ky2;
          cin>>ky2;
          vector<int> y2;
          for (int i = 0; i < ky2; i++)
          {
               int temp;
               cin>>temp;
               y2.push_back(temp);
          }

          calculate_area(w,h,x1,x2,y1,y2);
          t--;
     }
     
}