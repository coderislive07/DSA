class Solution {
public:
    int subtractProductAndSum(int n) {
         int product=1;
        int sum=0;
       
        while(n!=0)
        {
            int mod=n%10;
            sum=sum+mod;
            product=product*mod;
            n=n/10;
        }
        int res=product-sum;
        return res;
        
    }
};