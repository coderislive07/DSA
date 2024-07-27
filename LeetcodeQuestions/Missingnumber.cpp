#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int sum1 = 0;
        for(int i=0;i<n;i++)
        {
            sum1 += nums[i];
        }
        return sum - sum1;
    }
};
// missing no 
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int missingno=0;
//         for(int i=0;i<=nums.size();i++)
//         {
//             missingno=missingno^i;

//         }
//         for(int num:nums)
//         {
//             missingno=missingno^num;
//         }
//         return missingno;
//     }
// };  
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int start = 0;
//         int end = nums.size();
        
//         while (start < end) {
//             int mid = start + (end - start) / 2;
//             if (nums[mid] > mid) {
//                 end = mid;
//             } else {
//                 start = mid + 1;
//             }
//         }
        
//         return start;
//     }
// };