#include<bits/stdc++.h>
using namespace std;

int calculateProfit(vector<int>v)
{
    int profit=0;
    int max_profit=0;
    int buy =v[0];
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=buy)
        {
            buy=v[i];
        }
        profit = v[i]-buy;
        max_profit=max(profit,max_profit);
    }
    return max_profit;
}






int main()
{
    vector<int>v={1,5,8,9,2,15};
    int profit = calculateProfit(v);
    cout<<profit;
}