#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>

class Solution {
public:
    string reverseWords(string s) {
        string reversedString;
        int n = s.size();
        int i = n - 1;
        
        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') {
                i--; 
            }
            
            if (i < 0) {
                break; 
            }
            
            int j = i;
            while (j >= 0 && s[j] != ' ') {
                j--; 
            }
            string word;
            for (int k = j + 1; k <= i; k++) {
                word += s[k];
            }
            
            if (!reversedString.empty()) {
                reversedString += " "; 
            }
            reversedString += word; 
            
            i = j; 
        }
        
        return reversedString;
    }
};
