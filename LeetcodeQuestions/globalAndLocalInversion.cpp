#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i]-i)>1)
            {
                return false;
            }
        }
        return true;
        
    }
};