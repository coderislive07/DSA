#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long start=0;
        long long end=num;
        if(num<1)
        {
            return false;
        }
        while(start<=end)
        {
            long long mid=start+(end-start)/2;
            if(mid*mid==num)
            {
                return true;
            }
            else if(mid*mid>num)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return false;
    }
};
