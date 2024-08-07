#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        int hills=0;
        int valleys=0;
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]==nums[i-1])
            {
                continue;
            }
            int j=i+1;
            while(j<n &&nums[j]==nums[i])
            {
                j++;
            }
            if(j==n)
            {
                break;
            }
            if(nums[i]>nums[i-1]&&nums[i]>nums[j])
            {
                hills++;
            }
             if(nums[i]<nums[i-1]&&nums[i]<nums[j])
            {
                valleys++;
            }
            
        } 
        int count=hills+valleys;
        return count;

    }
};