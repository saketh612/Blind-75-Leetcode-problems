#include<bits/stdc++.h>
using namespace std;


int maxProduct(vector<int>nums)
{
   int max_product=INT_MIN;
   int pre=1;
   int suf=1;
   int n=nums.size();
   for(int i=0;i<n;i++)
   {
       if(pre==0)
        {
            pre=1;
        }
        else if(suf==0)
        {
            suf=1;
        }
        pre =pre*nums[i];
        suf=suf*nums[n-i-1];
    
        max_product=max(max_product,max(pre,suf));
   }
   return max_product;
}







int main()
{
    vector<int>v={2,3,-2,4};
    int result = maxProduct(v);
    cout<<result;
}