#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;  
        for (int num : arr) {  
            if (num % 2 == 1) {  
                count++;  
                if (count == 3) {  
                    return true;  
                }
            } else {
                count = 0;  
            }
        }
        return false; 
    }
};
