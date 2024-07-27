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
