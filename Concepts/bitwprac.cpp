// and or not xor 
// nnumbers ko binary mein convert kro then unme and or not xor jo bhi lgana lga do and get your ans in decimal 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     int b=4;;
//     cout<<(a&b)<<endl;
//     cout<<(a|b)<<endl;
//     cout<<~a<<endl;
//     cout<<(a^b)<<endl;
//     cout<<(a<<2)<<endl; /* left shift operator - 4 ka binary likho 2 baar left shift krdo means left side shift krke right end pr two zeroes lgado */
//     // for small no multiply by 2 and get the ans 
//     cout<<(a>>2)<<endl; 
//     // right shift kiya 2 times end terms bahr  krdi 2 right vali 
//     // or divide by 2 and get ans for small no
//     int m=10, n=1;
//     if(++m)
//     {
//         cout<<n;
//     } 
//     else
//     {
//         cout<<++n; 
//     }


// }

// fibonacci no code 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<0<<endl;
//     cout<<1<<endl;
//     cout<<1<<endl;
//     if(n==1 || n==2)
//     {
//         cout<<1;
//     }
//     else
//     {
//         int x=1,y=1;
//         for(int i=3;i<=n;i++)
//         {
//             int fibo=x+y;
//             cout<<fibo<<endl;
//             x=y;
//             y=fibo;

//         }
//     }

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0;i<=5;i--)
//     {
//         cout<<i<<" ";
//         i++;
//     }
// }    --- infinite loop --- 

// code to convert decimal number into binary using arrays
// #include<iostream>
// using namespace std;
// int main()
// {
//     int binary[100],n;
//     cout<<"Enter a decimal no ";
//     cin>>n;
//     int i=0;
//     while(n!=0)
//     {
//         binary[i]=n%2;
//         n=n/2;
//         i++;

//     }
//     for(int j=i-1;j>=0;j--)
//     {
//         cout<<binary[j];
//     }
// }
// code to find the 1s in binary 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int binary[100],n,count=0;
//     cout<<"Enter a decimal no ";
//     cin>>n;
//     int i=0;
//     while(n!=0)
//     {
//         binary[i]=n%2;
//         n=n/2;
//         i++;

//     }
//     for(int j=i-1;j>=0;j--)
//     {
//         cout<<binary[j];
//         if(binary[j]==1)
//         {
//             count++;
//         }
//     }
//     cout<<"\n";
//     cout<<"The count of 1 is " << count<<endl;
//        if(count==1)
//        {
//         cout<<"this number is power of 2";
//        }
//  }

// convert binary to decimal number 
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n,sum=0;
//     cin>>n;
//     int arr[100];
//     int i=0;
//     while(n!=0)
//     {
//         arr[i]=(n%10)*pow(2,i);
//         n=n/10;
//         i++;

//     }
//      for(int j=0;j<i;j++)
//     {
//         sum =sum+arr[j];

//     }
//     cout<<sum;
// }

// complement of base 10 integer 
// #include<iostream>
// #include<cmath> // Use <cmath> instead of <math.h> in C++
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int flip[100];
//     int i = 0;

//     while (n != 0) {
//         int bit = n & 1;
//         flip[i] = bit ^ 1;
//         n = n >> 1;
//         i++;
//     } 
//     int sum = 0;
//     for (int j = 0; j < i; j++) {
//         sum += flip[j] * pow(2, j);
//     }
//     cout << sum;
//     return 0;
// }

// rupees note question by switch case
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int hundreds = 0;
//     int fifties = 0;
//     int twenties = 0;
//     int ones = 0;
//     int p = 1;

//     while (n != 0) {
//         switch (p) {
//             case 1:
//                 hundreds = n / 100;
//                 n = n - hundreds * 100;
//                 break;
//             case 2:
//                 fifties = n / 50;
//                 n = n - fifties * 50;
//                 break;
//             case 3:
//                 twenties = n / 20;
//                 n = n - twenties * 20;
//                 break;
//             case 4:
//                 ones = n / 1;
//                 n = n - ones * 1;
//                 break;
//         }
//         p++;
//     }
//       cout<<"Hundred notes are "<<hundreds<<endl;
//     cout<<"fifties notes are "<<fifties<<endl;
//     cout<<"twenties notes are "<<twenties<<endl;
//     cout<<"Ones notes are "<<ones<<endl;
// }

// no of 1 bits in a number 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int m=n;
//     int mask=0;
//     while(m!=0)
//     {
//         mask=mask<<1|1;
//         m=m>>1;
//     } 
//     int ans=~n&mask;
//     cout<<ans; 
// }

// ncr code 
// #include<iostream>
// using namespace std;
// int factorial(int n)
// {
//     int fact=1;;
//     for(int i=n;i>=1;i--)
//     {
//     fact=fact*i;
//     }
//     return fact;

// }
// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     int ans=factorial(n)/(factorial(r)*factorial(n-r));
//     cout<<ans;
// }

// #include <iostream>
// using namespace std;

// int setbits(int n) {
//     int m=n;
//     int binary[100];
//     int i = 0;
//     int count=0;
    
//     while (n != 0) {
//         binary[i] = n % 2;
//         n = n / 2;
//         i++;
//     }
//     cout<<"The binary representation of "<< m << " is : " ;
//     for (int j = i - 1; j >= 0; j--) {
//         cout << binary[j];
//         if(binary[j]==1)
//         {
//             count++;
//         }
//     }
//     cout<<"\n";
//     return count;
// }

// int main() {
//     cout<<"Enter first no"<<endl;
//     int n;
//     cin >> n;
//     cout<<"Enter second no"<<endl;
//     int m;
//     cin >> m;
//     cout<<"The count of 1s is" <<setbits(n)+setbits(m);
//     cout << endl;  

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int getmax(int arr[],int size)
// {
//     int max=arr[0];
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }

//     }
//     cout<<max<<endl;
// }
// int getmin(int arr[],int size)
// {
//     int min=arr[0];
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]<min)
//         {
//             min=arr[i];
//         }

//     }
//     cout<<min;
// }
// int main()
// {
//     int num[100];
//     int size;
//     cout<<"Enter the size of array";
//     cin>>size;
//      cout<<"Enter the elements of array";
//     for(int i=0;i<size;i++)
//     {
//         cin>>num[i];
//     }
//     getmax(num,size);
//     getmin(num,size);

// }

// #include<iostream>
// using namespace std;
// int swap(int arr[],int size)
// {
//       for(int i=0;i<size;i+=2)
//     {
//         if(i+1<size)
//         {
//         swap(arr[i],arr[i+1]);
//         }
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i];
//     }
//     cout<<"\n";

// }
// int main()
// {
//     int arr[6] ={1,2,3,4,5,6};
//     int size=6;
//     int arr1[5]={22,23,24,25,26};
//     int size1=5;
//     swap(arr,size);
//     swap(arr1,size1);
// }

// #include<iostream>
// using namespace std;
// int unique(int arr[], int size)
// {
  
//     for(int i=0;i<size;i++)
//     {
//           int count=0;
//         for(int j=0;j<size;j++)
//         {
//             if(arr[j]==arr[i])
//             {
//                 count++;
//             }

//         }
//         if(count==1)
//         {
//             cout<<arr[i]<<" ";
//         }
      

//     }
    

// }
// int main()
// {
//     int arr[6]={1,2,4,1,5,4};
//     cout<<sizeof(arr)/sizeof(int);
// } 

// finding a unique element 
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,1,3,3,5};
    int ans=0;
    for(int i=0;i<5;i++)
    {
        ans=ans^arr[i];
        cout<<ans<<endl;
   
     }
          cout<<(0^5);
  

 }
// // finding a duplicate in an array 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={1,1,2,3,4};
//     int ans=0;
//     for(int i=0;i<5;i++)
//     {
//         ans=ans^arr[i];
//     }   
//     for(int i=0;i<5;i++)
//     {
//         ans=ans^i;
//     }
//     cout<<ans;
// }

// finding duplicates in an array 
// we can also go by set method 
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         unordered_set<int> seen;
//         vector<int> duplicates;
//         for (int num : nums) {
//             if (seen.count(num)) {
//                 duplicates.push_back(num);
//             } else {
//                 seen.insert(num);
//             }    
//         }
//         return duplicates;
//     }
// };

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         vector<int> duplicates;
//         for (int i = 1; i < nums.size(); ++i) {
//             if (nums[i] == nums[i - 1]) {
//                 duplicates.push_back(nums[i]);
//             }
//         }
//         return duplicates;
//     }
// };


// finding sum of unique elements
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
//    int sumOfUnique(vector<int>nums) {
//         unordered_map<int, int> frequency;
//         int sum = 0;
//         // Count frequencies of each number in nums
//         for (int num : nums) {
//             frequency[num]++;
//         }
        
//         // Sum up the numbers that appear exactly once
//         for(auto & pair : frequency) {
//             if (pair.second == 1) {
//                 sum += pair.first;
//             }
//         }
        
//         return sum;
//     }
// int main()
// {
//     vector <int> arr={1,2,2,1,5};
//     cout<<sumOfUnique(arr)<<" ";
// }
 



// removing elements which are reoccuring 
// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//     int arr[5]={1,2,4,4,5};
//     set<int>uniqueElements;
//     for(int i=0;i<5;i++)
//     {
//     
//         uniqueElements.insert(arr[i]);
        
//     }
//     cout<<"Unique elements are";
//     for(int i :uniqueElements)
//     {
//         cout<<i;

//     }
// }

// --- Intersection of two arrays ----













