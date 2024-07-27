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
        int rowindex=0;
        int columnindex=columns-1;
        while(rowindex<rows && columnindex>=0)
        {
            int element=matrix[rowindex][columnindex];
            if(element==target)
            {
                return true;
            }
            if(element<target)
            {
                rowindex++;
            }
            else
            {
                columnindex--;
            }
        }
        return false;


    }
};
