#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> twoSum(vector<int>v,int k)
{
    unordered_map<int,int>store;
    vector<vector<int>>result;

    for(int i=0;i<v.size();i++)
    {
        int complement = k-v[i];
        if(store.find(complement)!=store.end())
        {
            result.push_back({v[i],v[store[v[i]]]});
        }
        store[v[i]]=i;
    }
    return result;
}





int main()
{
    vector<int>q={1,5,4,8,9,6,2};
    int k;
    vector<vector<int>>result = twoSum(q,k);
    if(result.empty())
    {
        cout<<"no solution found";
    }
    else
    {
        for(int i=0;i<result.size();i++)
        {
            cout<<"pair are"<<result[i][0]<<"and"<<result[i][1];
        }
    }
    return 0;
}