#include<iostream>
using namespace std;
bool isSorted(int arr[],int size)
{
    if(size==0||size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
        {
            return false;
        }
    else
    {
       isSorted(arr+1,size-1);  
         }
}
int sum(int arr[],int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
    if(size>1)
    {
        return arr[0]+sum(arr+1,size-1);
    }
}
bool linearSearch(int arr[],int size,int k)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==k)
    {
        return true;

    }
    else
    {
        linearSearch(arr+1,size-1,k);
    }

}
bool binarysearch(int arr[],int s,int e,int k )
{
    if(s>e)
    {
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
    {
        return true;
    }
    if(arr[mid]<k)
    {
        return binarysearch(arr,mid+1,e,k);
    }
    else
    {
        return binarysearch(arr,s,mid-1,k);
    }

}
int main()
{
    int arr[5]={2,4,10,8,9};
    int size=5;
    int key=21;
    bool ans=isSorted(arr,size);
    if(ans)
    {
        cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted"<<endl;
    }
    int ans1=sum(arr,size);
    cout<<ans1<<endl;
    linearSearch(arr,size,key);
    if(linearSearch)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    cout<<binarysearch(arr,arr[0],arr[size],key);

}


// binary search with recursion 
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binarysearch(nums, 0, nums.size() - 1, target);
    }

private:
    int binarysearch(vector<int>& nums, int s, int e, int target) {
        if (s > e) {
            return -1;
        }
        int mid = s + (e - s) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] < target) {
            return binarysearch(nums, mid + 1, e, target);
        } else {
            return binarysearch(nums, s, mid - 1, target);
        }
    }
};
