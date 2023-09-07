#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>threeSum(vector<int>nums,int k)
{
  vector<vector<int>> res;
     unordered_map<int, int> mp;
     sort(nums.begin(),nums.end());

    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]] = i;
    }

    for (int i = 0; i < nums.size() - 2; i++) {
    
        if(i>0 && nums[i]==nums[i-1])
        {
            continue;
        }
        for (int j = i + 1; j < nums.size() - 1; j++) {
            if (j > i + 1 && nums[j] == nums[j-1]) continue;
            int complement = k- nums[i] - nums[j];
            if (mp.count(complement) && mp[complement] > j) {
                res.push_back({nums[i], nums[j], complement});
            }
        }
    }

    return res;
}







int main()
{
    vector<int>v={1,5,8,9,2,15};
    int k=18;
    vector<vector<int>>result = threeSum(v,k);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i][0]<<result[i][1]<<result[i][2]<<endl;
    }
    return 0;
}