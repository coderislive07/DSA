#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    void reverseString(vector<char>& s) {
         int start=0;
         int end=s.size()-1;
         while(start<=end)
         {
            swap(s[start++],s[end--]);
         }
         for(char i:s)
         {
            cout<<i;
         }
      
    }
};