#include<bits/stdc++.h>
using namespace std;


int mostWater(vector<int>v)
{
    int n =v.size();
    int left=0;
    int right=n-1;
    int max_area=0;
    int height;
    while (left<right)
    {
        height=min(v[left],v[right]);
        int width =right-left;
        int area = height*width;
        max_area=max(area,max_area);

        if(v[left]<v[right])
        {
            left++;
        }
        else{
            right--;
        }
    }
    
    
}





int main()
{
    vector<int>v={1,8,6,2,5,4,8,3,7};
    int result =mostWater(v);
    return 0;
}