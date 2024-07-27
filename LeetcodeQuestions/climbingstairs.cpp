class Solution {
public:
    int climbStairs(int n) {
        int count;
        if(n<0)
        {
            return 0;
        }
        if(n==0)
        {
            return 1;
        }
        count=climbStairs(n-1)+climbStairs(n-2);
        return count;
        
    }
};