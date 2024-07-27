#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>

using namespace std;
int main()
{
    // Arrays in STL static array 
    // array<int ,4> a={1,2,3,4};
    // int array_size=a.size();
    // for(int i=0;i<array_size;i++)
    // {
    //     cout<<a[i];
    // }
    // cout<<"\n";
    // cout<<a.at(2)<<endl;
    // cout<<a.empty()<<endl;
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;  

    // vectors in STL (dynamic array)
    // difference is jse  4 size ka array hai apne 5 elements diye toh ye vector apna size double krke usme elements dal dega and purana array dump krdega 
    // vector<int> v;
    // vector <int> last(v);
    // // last name ke vector mein purane sb v ke aagye 
    // cout<<v.capacity()<<endl;
    // v.push_back(5);
    // cout<<v.capacity()<<endl;
    // v.push_back(6);
    // cout<<v.capacity()<<endl;
    // v.push_back(7);
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }
    // // cout<<v.capacity()<<endl; /**  size double krliya **/
    //  v.pop_back();
    //  cout<<"\n";
    //   for(int i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<"\n";
    // cout<<v.size()<<endl;
    // v.clear(); 
    // cout<<v.size()<<endl;

    //  ---deque--- means double  ended que , we can insert delete or change anything from last as well as front , also it is not contiguous allocation like above vectors and arrays 

    // deque<int> d;
    // d.push_back(1);
    // d.push_front(2);
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
     
    // ----List---- made by use of double linked-list (direct access of element is not possible we have to travel for that element) not contiguous each element is linked by array
    // list <int> l ;
    // l.push_back(1);
    // l.push_front(5);
    // l.erase(l.begin());

    // ----stack---- last in first out like plates in parties

    // stack <string> s;
    // s.push("Mridul");
    // s.push("Dhamija");
    // cout<<"Top element " << s.top()<<endl;    
    // s.pop();

    // ---queue--- first in first out 
    // queue <string> q;
    // q.push("Mridul");
    // q.push("Dhamija");
    // q.push("Lakshay");
    // cout<<q.front();
    // cout<<q.size();

    // priority queue  max heap or min heap 
//     priority_queue<int>maxi;
//     priority_queue<int,vector<int>,greater<int>>mini;
//     maxi.push(0);
//     maxi.push(2);
//     maxi.push(3);
//     maxi.push(1);
//     int n=maxi.size();
//     for(int i=0;i<n;i++)
//     {
//         cout<<maxi.top();
//         maxi.pop();
//     }
//     // max value phle dega 


    // ---- set ----
//     set<int>s;
//     s.insert(5); 
//     s.insert(5); 
//     s.insert(4); 
//     s.insert(4); 
//     s.insert(3); 
//     s.insert(3); 
//     for(int i:s)
//     {
//         cout<<i<<" ";
//         // ans is 3 4 5 set dega and order me dega this is ordered set 
//     }
//     cout<<"\n";
//     cout<<s.count(5);

// ---Map---   in key and value pairs 

// this is a ordered map 
// for unordered use unordered map 
// map<int,string> m;
// m[1]="Mridul";
// m[2]="Dhamija";
// m[3]="Kartik";
// m.insert({4,"Bheem"});
// for(auto i:m)
// {
//     cout<<i.first<<" ";
//     cout<<i.second<<endl;
// }
//  }






