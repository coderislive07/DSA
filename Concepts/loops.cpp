// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<n-j;
//         }
//         cout<<'\n';
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=1;i<=n;i++)
//     {

//         for(int j=1;j<=n;j++)
//         {
//             cout<<count;
//             count++;
            
//         }
//         cout<<'\n';
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<'\n';
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<count;
//             count++;
//         }
//         cout<<'\n';
//     }
// }

// ---Good One ---
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++)
//     {
//         for(int j=i;j<2*i;j++)
//         {
//             cout<<j;
//         }
//         cout<<'\n';
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++)
//     {
//         for(int j=i;j>=1;j--)
//         {
//             cout<<j;
//         }
//         cout<<'\n';
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ascii=65;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             cout<<char(ascii);
//             ascii++;
//         }
        
//         cout<<'\n';
//     }
// // }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ascii=65;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             char ch=ascii+i+j-2;
//             cout<<ch;
         
//         }
//         cout<<'\n';
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ascii=65;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         { 
//             cout<<char(ascii);
//         }
//         ascii++;
//         cout<<"\n";

//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ascii=65;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         { 
//             cout<<char(ascii);
//              ascii++;
//         }
       
//         cout<<"\n";
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ascii=65;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         { 
//             cout<<char(ascii+i+j-2);    
//         }
       
       
//         cout<<"\n";
//     }
// }


// nahi hua tha first tym mein 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ascii=65;
    for(int i=1;i<=n;i++)
    {
         char c=(ascii+n-i);
        for(int j=1;j<=i;j++)
        {
           
            cout<<c;
            c++;
        }
        cout<<"\n";
    }
}


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ascii=65;
//     for(int i=1;i<=n;i++)
//     {
//          char c=(ascii+i-1);
//         for(int j=1;j<=n;j++)
//         {
           
//             cout<<c;
//             c++;
//         }
//         cout<<"\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int space=1;space<=n-i;space++)
//         {
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--)
//     {
//         for(int j=i;j>=1;j--)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int space=1;space<=n-i;space++)
//         {
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j;
//         }
//         for(int k=i-1;k>=1;k--)
//         {
//             cout<<k;
//         }
//         cout<<"\n";
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i+1;j++)
//         {
//             cout<<j;   
//         }
//         for(int k=1; k<=2*i-2;k++)
//         {
//             cout<<"*";
//         }
//         for(int m=n-i+1; m>=1;m--)
//         {
//             cout<<m;
//         }
//           cout<<"\n";
//     }
  
// }