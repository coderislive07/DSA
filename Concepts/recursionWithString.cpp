// #include <iostream>
// using namespace std;
// #include<vector>
// #include<unordered_map>
// #include<algorithm>
// #include<unordered_set>
// void reverseString(string&  s , int i , int j)
// {
//     if(i>j)
//     {
//         return;
//     }
//     swap(s[i],s[j]);
//     i++;
//     j--;
//     reverseString(s,i,j);
// }
// void reverseStringByOnePointer(string&s , int i )
// {
//     if(i>=s.length()/2)
//     {
//         return;
//     }
//     swap(s[i],s[s.length()-i-1]);
//     reverseStringByOnePointer(s,++i);
// }
// int main()
// {
//     string name="Mridul";
//     // reverseString(name,0,name.length()-1);
//     // cout<<name;
//     reverseStringByOnePointer(name,0);
//     cout<<name;
// }


// finding power by recursion 
// #include<iostream>
// using namespace std;
// int pow(int a , int b)
// {
//     if(b==0)
//     {
//         return 1;
//     }
//     if(b==1)
//     {
//         return a;
//     }
//     int ans=pow(a,b/2);
//     if(b%2==0)
//     {
//         return ans*ans;
//     }
//     else

//     {
//         return a*ans*ans;
//     }

// }
// int main()
// {
//     int a=2;
//     int b=3;
//     pow(a,b);
// }

// Bubble Sort Using Recursion 
// #include<iostream>
// using namespace std;
// void bubbleSort(int arr[], int n)
// {
//     if(n==0||n==1)
//     {
//         return;
//     }   
//     for(int i=0;i<n-1;i++)
//     {
//         if(arr[i]>arr[i+1])
//         {
//             swap(arr[i],arr[i+1]);
//         }

//     }
//     bubbleSort(arr,n-1);
// }
// int main()
// {
//     int arr[5]={22,30,34,12,6};
//     int n=5;
//     bubbleSort(arr,n);
//     for(int i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

