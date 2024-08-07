#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
#include<set>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniqueElements;
        for (int i = 0; i < nums.size(); i++) {
            uniqueElements.insert(nums[i]);
        }
        
        nums.assign(uniqueElements.begin(), uniqueElements.end());
        return nums.size();
    }
};
