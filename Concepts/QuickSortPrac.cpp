#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>
int partition(int arr[],int start, int end)
{
    int pivot=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    int pivotIndex=start+count;
    swap(arr[start],arr[pivotIndex]);
    int i=start;
    int j=end;
    while(start<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotIndex&&j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotIndex;
    
}
void quickSort(int arr[],int start , int end)
{
    if(start>=end)
    {
        return ;
    }
    int p=partition(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
}
int main()
{
    int arr[5]={3,5,10,6,1};
    int n=5;
    quickSort(arr,0 , n-1);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

}