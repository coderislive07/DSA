#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        while(start<end)
           {
        int mid=start+(end-start)/2;
            if(nums[mid+1]>nums[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid;
            }
        }
        return start;
        
    }
};