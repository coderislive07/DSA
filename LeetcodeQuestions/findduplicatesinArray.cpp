#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> duplicates;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                duplicates.push_back(nums[i]);
            }
        }
        return duplicates;
    }
};
// finding duplicates in an array 
// we can also go by set method 
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         unordered_set<int> seen;
//         vector<int> duplicates;
//         for (int num : nums) {
//             if (seen.count(num)) {
//                 duplicates.push_back(num);
//             } else {
//                 seen.insert(num);
//             }    
//         }
//         return duplicates;
//     }
// };