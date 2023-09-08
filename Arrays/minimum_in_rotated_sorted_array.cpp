#include<bits/stdc++.h>
using namespace std;

int searchElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        int mid = left + (right - left) / 2;
        int ans=INT_MAX;
        while (left <= right) {
           if(nums[left]<=nums[mid])
           {
            ans=min(ans,nums[left]);
            left=mid+1;
           }
           else
           {
            ans=min(nums[mid],ans);
            right=mid-1;
           }
           mid = left + (right - left) / 2;
        }
        return ans;
    }

int main() {
    vector<int> v = {11, 13, 15, 2, 7, 9};

    int minimum = searchElement(v);
    cout<<minimum;
    return 0;
}
