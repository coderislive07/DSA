#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k = 1; // Initialize k to 1 for the plus one operation
        int n = digits.size() - 1;
        
        for (int i = n; i >= 0; --i) {
            digits[i] = digits[i] + k;
            k = digits[i] / 10;
            digits[i] = digits[i] % 10;
        }
        
        // Handle the carry
        while (k > 0) {
            digits.insert(digits.begin(), k % 10);
            k = k / 10;
        }
        
        return digits;
    }
};
