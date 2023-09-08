#include<bits/stdc++.h>
using namespace std;



vector<int> calculateProduct(vector<int>v)
{
    int n =v.size();
    vector<int>output;
    int product =1;

    for(int i=0;i<n;i++)
    {
        product=product*v[i];
        output[i]=product;
    }

    product=1;

    for(int i=n-1;i>0;i--)
    {
        output[i]=output[i-1]*product;
        product=product*v[i];
    }
    output[0]=product;

    return output;
}






int main()
{
    vector<int>v;
    vector<int>productArray = calculateProduct(v);
    return 0;
}