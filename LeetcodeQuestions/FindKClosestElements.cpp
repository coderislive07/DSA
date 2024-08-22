#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> result;
        int start = 0;
        int end = arr.size() - 1;
        // Binary search to find the closest index to x
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] >= x) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        
        int targetIndex = start;  
        int left = targetIndex - 1;
        int right = targetIndex;

        while (k > 0) {
            if (left >= 0 && right < arr.size()) {
                if (abs(arr[left] - x) <= abs(arr[right] - x)) {
                    result.push_back(arr[left]);
                    left--;
                } else {
                    result.push_back(arr[right]);
                    right++;
                }
            } else if (left >= 0) {
                result.push_back(arr[left]);
                left--;
            } else if (right < arr.size()) {
                result.push_back(arr[right]);
                right++;
            }
            k--;
        }
        
        sort(result.begin(), result.end());
        return result;
    }
};