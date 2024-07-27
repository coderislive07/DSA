// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int **arr= new int*[n];
//     for(int i=0;i<n;i++)
//     {
//         arr[i]=new int[n];
//     }
//     for( int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     for( int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++)
//     {
//         delete [] arr[i];

//     }
//     delete []arr;
// }

#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter number of rows";
    cin>>rows;
    int *columns =new int[rows];
    cout<<"Enter variable no of columns you want";
    for(int i=0;i<rows;i++)
    {
        cin>>columns[i];

    }
     int **arr= new int*[rows];
     for(int i=0;i<rows;i++)
    {
        arr[i]=new int[columns[i]];
    }
    for( int i=0;i<rows;i++)
    {
        for(int j=0;j<columns[i];j++)
        {
            cin>>arr[i][j];
        }
    }
    for( int i=0;i<rows;i++)
    {
        for(int j=0;j<columns[i];j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<rows;i++)
    {
        delete [] arr[i];

    }
    delete []arr;
}