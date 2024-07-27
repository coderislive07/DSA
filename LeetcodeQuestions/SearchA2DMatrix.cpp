#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        int start=0;
        int end=(rows*columns)-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int element=matrix[mid/columns][mid%columns];
            if(element==target)
            {
                return true;
            }
            else if(element<target)
            {
                start=mid+1;

            }
            else
            {
                end=mid-1;
            }
        }
        return false;
        
    }
};