#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};

        for(int i = 0; i < s.length(); i++) {
            int chracter = s[i];
            int number = chracter - 'a';
            arr[number]++;
        }

        for(int i = 0; i < s.length(); i++) {
            int chracter = s[i];
            int number = chracter - 'a';
            if(arr[number] == 1) {
                return i;
            }
        }

        return -1;
    }
};
