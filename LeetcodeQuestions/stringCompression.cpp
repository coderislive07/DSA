#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;
        for (int i = 0; i < chars.size();) {
            const char letter = chars[i]; 
            int count = 0; 


            while (i < chars.size() && chars[i] == letter) {
                ++count;
                ++i;
            }


            chars[ans++] = letter;

    
            if (count > 1) {
                for (const char c : to_string(count)) {
                    chars[ans++] = c;
                }
            }
        }

      
        return ans;
    }
};