#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
       
        for(int i=0;i<n;i++){
            int element=nums[i]; 
            while(element>=1 && element<=n && nums[element-1]!=element){
                swap(nums[element-1],nums[i]);
                element=nums[i];
         
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i] == i+1)continue;
                return i+1;       
            
        }
        
        return n+1;
    }
};