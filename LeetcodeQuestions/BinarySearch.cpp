#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]>=target)
            {
                if(nums[mid]==target)
                {
                    return mid;
                }
                    end=mid-1;

            }
            else
            {
                start=mid+1;
            }
        } 
        return -1;  
    }
};