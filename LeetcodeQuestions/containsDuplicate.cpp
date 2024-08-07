#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int>duplicates;
    for(int i :nums)
    {
        if(duplicates.count(i))
        {
            return true;
        }
        else
        {
            duplicates.insert(i);
        }
    }
    return false;
    }
};