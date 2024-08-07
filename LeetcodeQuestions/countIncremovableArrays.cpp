#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>

class Solution {
public:
   bool isIncrem(vector<int>& nums, int start, int end) {
        for (int i = 1; i < start; ++i) {
            if (nums[i] <= nums[i - 1]) {
                return false;
            }
        }
        for (int i = end + 1; i < nums.size() - 1; ++i) {
            if (nums[i] >= nums[i + 1]) {
                return false;
            }
        } 
        if (start > 0 && end < nums.size() - 1 && nums[start - 1] >= nums[end + 1]) {
            return false;
        }
        
        return true;
    }

    int incremovableSubarrayCount(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (isIncrem(nums, i, j)) {
                    ++count;
                }
            }
        }
        
        return count;
    }
};
