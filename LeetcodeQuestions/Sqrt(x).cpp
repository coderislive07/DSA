#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        int ans=-1;
        if(x==0)
        {
            return 0;
        }
          if(x==1)
        {
            return 1;
        }
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(mid==x/mid)
            {
                return mid;
            }
            if(mid>x/mid) /*as mid*mid=x */
            {
                end=mid-1;
            }
            else
            {
                ans=mid;
                start=mid+1;
            }

        }
        return ans;
        
    }
};