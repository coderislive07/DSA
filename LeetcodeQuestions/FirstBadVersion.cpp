#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1;
        int end=n;
        int check;
         int ans=-1;
        while(start<=end)
        {
           
            int mid=start+(end-start)/2;
            // check=isBadVersion(mid);  isBadVersion already defined in leetcode
            if(check==1)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;


        
        
    }
};