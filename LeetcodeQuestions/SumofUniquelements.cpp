#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> frequency;
        int sum = 0;
        
     
        for (int num : nums) {
            frequency[num]++;
        }
        
        for (auto & pair : frequency) {
            if (pair.second == 1) {
                sum += pair.first;
            }
        }
        
        return sum;
    }
};
