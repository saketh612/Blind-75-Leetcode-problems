#include<bits/stdc++.h>
using namespace std;

bool foundElement(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int mid = left + (right - left) / 2;
        while (left <= right) {
            if (nums[mid] == target) {
                return true;
            }
            if (nums[left] <= nums[mid]) {
                if (target < nums[mid] && target >= nums[left]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {
                if (target > nums[mid] && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            mid = left + (right - left) / 2;
        }
        return false;
    }

int main() {
    vector<int> v = {11, 13, 15, 2, 7, 9};
    int k = 12; // Set the value of k to search for.

    if (foundElement(v, k)) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
