#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
                 cout<<endl;
        }
   
    }
}

// Count the Number of Incremovable Subarrays I  

// Not a optimized approach 
// class Solution {
// public:
//     bool inremovable(vector<int> subarrays) {
//         for (int i = 1; i < subarrays.size(); i++) {
//             if (subarrays[i] <= subarrays[i - 1]) {
//                 return false;
//             }
//         }
//         return true;
//     }

//     int incremovableSubarrayCount(vector<int>& nums) {
//         int count = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i; j < nums.size(); j++) {
//                 vector<int> subarrays;
//                 for (int k = 0; k < i; k++) {
//                     subarrays.push_back(nums[k]);
//                 }
//                 for (int k = j + 1; k < nums.size(); k++) {
//                     subarrays.push_back(nums[k]);
//                 }
//                 if (inremovable(subarrays)) {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

