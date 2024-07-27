#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size()-1;
        for(int i=n;i>=0;i--)
        {
            num[i]=num[i]+k;
            k=num[i]/10;
            num[i]=num[i]%10;
        }
        while(k>0)
        {
            num.insert(num.begin(),k%10);
            k=k/10;
        }
        return num;
        
    }
};