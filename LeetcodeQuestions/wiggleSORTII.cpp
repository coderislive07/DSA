#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>temp(nums);
        sort(temp.begin(),temp.end());
        int n=nums.size();
        int start=0;
        int end=n-1;
        int largerno=end/2+1;
        while(end>=0)
        {
            if(end%2==1)
            {
                nums[end]=temp[largerno];
                largerno++;
            }
            else
            {
                nums[end]=temp[start];
                start++;
                

            }
            end--;
        }



    }
};