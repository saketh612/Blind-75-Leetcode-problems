#include<bits/stdc++.h>
using namespace std;


int maxSum(vector<int>v)
{
    int max_sum=INT_MIN;
    int sum=0;
    for(int i =0;i<v.size();i++)
    {
        sum = sum+v[i];
        max_sum=max(sum,max_sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    return max_sum;
}







int main()
{
    vector<int>v={-2,1,-3,4,-1,2,1,-5,4};
    int result = maxSum(v);
    cout<<result;
}