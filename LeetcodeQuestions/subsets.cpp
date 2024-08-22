#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
    void powerset(vector<int> nums , vector<int>output , int index ,  vector<vector<int>>&ans  )
{
    if(index>=nums.size())
    {
        ans.push_back(output);
        return;
    }
    // exclude vala part 
    powerset(nums , output , index+1 , ans);
    // include vala part 
    int element=nums[index];
    output.push_back(element);
     powerset(nums , output , index+1 , ans);

}
public:

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans; 
        vector<int>output;
    
        int index=0;
        powerset(nums,output , index , ans);
        return ans;

        
    }
};