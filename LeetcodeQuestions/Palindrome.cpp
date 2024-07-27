#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int temp=x;
        long long pal=0;
        while(x!=0)
        {
        int mod=x%10;
        pal=pal*10+mod;
        x=x/10;
        };
        if(pal==temp)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
