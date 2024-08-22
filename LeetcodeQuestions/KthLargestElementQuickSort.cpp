#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
class Solution {
private:
    int partition(vector<int>& nums, int start, int end) {
        // Randomly select a pivot index
        int pivotIndex = start + rand() % (end - start + 1);
        int pivot = nums[pivotIndex];
        swap(nums[pivotIndex], nums[end]); 
        pivotIndex = end;
        int i = start;
        for (int j = start; j < end; j++) {
            if (nums[j] <= pivot) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
        swap(nums[i], nums[pivotIndex]); // Move pivot to its correct position
        return i;
    }

    void quickSelect(vector<int>& nums, int start, int end, int k) {
        if (start <= end) {
            int p = partition(nums, start, end);
            if (p == k) {
                return;
            } else if (p < k) {
                quickSelect(nums, p + 1, end, k);
            } else {
                quickSelect(nums, start, p - 1, k);
            }
        }
    }

public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int kIndex = n - k; // Convert kth largest to kth smallest index
        quickSelect(nums, 0, n - 1, kIndex);
        return nums[kIndex];
    }
};
