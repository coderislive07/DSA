// Array should be monotonous either increasing or decreasing 
// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int size , int key)
// {
//     int start=0;
//     int end = size-1;
//     int mid=(start+(end-start/2));
//     while(start<=end)
//     {
//     if(key==arr[mid])
//     {
//         return mid;
//     }
//     else
//     {
//         // go to right vala part 
//         if(key>arr[mid])
//         {
//             start=mid+1;
//         }
//         // go to left vala part 
//         else
//         {
//             end=mid-1;
//         }
//         mid=(start+(end-start/2));
//     }
//     }
//     return -1;
// }
// int main()
// {
//   int even[6]={2,4,6,8,12,18};
//   int odd[5]={3,8,11,14,16};
//   int index=binarySearch(even,6,12);
//   cout<<index;
// }
// ---pivot problem ---- pivot means lowest element
// #include<iostream>
// using namespace std;
// int getpivot(int arr[],int n)
// {
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//         while(start<end)
//         {
//             if(arr[mid]>=arr[0])
//             {
//                 start=mid+1;
//             }
//             else
//             {
//                 end=mid;
//             }
//             mid=start+(end-start)/2;
//         }
//         return start;
//     }
// int main()
// {
//     int arr[5]={8,10,17,1,3};
//     cout<<getpivot(arr,5);
// }

// missing no 
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int missingno=0;
//         for(int i=0;i<=nums.size();i++)
//         {
//             missingno=missingno^i;

//         }
//         for(int num:nums)
//         {
//             missingno=missingno^num;
//         }
//         return missingno;
//     }
// }; 
// or 
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int sum = (n*(n+1))/2;
//         int sum1 = 0;
//         for(int i=0;i<n;i++)
//         {
//             sum1 += nums[i];
//         }
//         return sum - sum1;
//     }
// };

// or 
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int start = 0;
//         int end = nums.size();
        
//         while (start < end) {
//             int mid = start + (end - start) / 2;
//             if (nums[mid] > mid) {
//                 end = mid;
//             } else {
//                 start = mid + 1;
//             }
//         }
        
//         return start;
//     }
// };


// sort an array by bubble sort 
// #include <vector>
// #include <algorithm>

// using namespace std;

// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 0; i < n - 1; ++i) {
//             for (int j = 0; j < n - i - 1; ++j) {  
//                 if (nums[j] > nums[j + 1]) {  
//                     swap(nums[j], nums[j + 1]);
//                 }
//             }
//         }
//         return nums;
//     }
// };

// insertion sort 
// #include<iostream>
// #include<vector>
// using namespace std;

// void insertionsort(int n, vector<int>& arr) {
//     for(int i = 1; i < n; i++) {
//         int temp = arr[i];
//         int j = i - 1;
//         for(; j >= 0; j--) {
//             if(temp < arr[j]) {
//                 arr[j + 1] = arr[j];
//             } else {
//                 break;
//             }
//         }
//         arr[j + 1] = temp;
//     }
// }

// int main() {
//     vector<int> arr = {22, 25, 21, 23, 89};
//     int n = arr.size();
    
//     insertionsort(n, arr);
    
//     // Print the sorted array
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// unique character in a string 
// class Solution {
// public:
//     int firstUniqChar(string s) {
//         unordered_map<char,int>frequency;
//         for(char ch:s)
//         {
//             frequency[ch]++;

//         } 
//         for(int i=0;i<s.length();i++)
//         {
//             if(frequency[s[i]]==1)
//             {
//                 return i;
//             }
//         } 
//         return -1;      
//     }
// };


