#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
bool isPossible(vector<int>position , int n , int m , int mid)
{
    int ballCount=1;
    int lastPosition=position[0];
    for(int i=1;i<n;i++)
    {
        if(position[i]-lastPosition>=mid)
        {
            ballCount++; 
            lastPosition=position[i];
            if(ballCount==m)
            {
            return true;    
            }
        }

    }
    return false;
    
}
class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start=0;
        int ans=-1;
        int n=position.size();
        int end=position[n-1]-position[0];
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isPossible(position,n,m,mid))
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }
};