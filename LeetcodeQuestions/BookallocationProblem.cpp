      #include <iostream>
      using namespace std;
      #include<vector>
      #include<unordered_map>
      #include<algorithm>
      #include<unordered_set>
    bool isPossible(vector<int>nums,int n , int k , int mid)
        {
            int studentCount=1;
            int pagesum=0;
            for(int i=0;i<n;i++)
            {
                if(pagesum+nums[i]<=mid)
                {
                    pagesum=pagesum+nums[i];
                }
                else
                {
                    studentCount++;
                    if(studentCount>k||nums[i]>mid)
                    {
                        return false;
                    }
                    pagesum=nums[i];
                }
            }
            return true;
        }
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
 
        int start=0;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int end=sum;
        int ans=-1;
    
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isPossible(nums,n,k,mid))
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