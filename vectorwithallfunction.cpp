/*

This is made by me to understand vector of stl at one glance...

*/

#include <iostream>
#include <vector>
template <typename t1, typename t2>           // Use of template function for any data-type
struct pair{
    t1 first;
    t2 second;
};
using namespace std;


void display(vector<int> &v)              // Make a function and give always address because of avoid memory of copied vector
{
    for(auto x : v )
        cout<<x<<" ";

    cout<<endl;

}
int main() {
    vector<int> v;            // Declaration of vector
    cout<<v.size()<<endl;     // Give the size of current vector


    vector<int> vec[10];      // Declare array of vector
    cout<<vec[0].size()<<endl;


    bool notempty(!v.empty());   // check whether empty or not
    cout<<notempty<<endl;


    for(int i=0;i<10;i++)
    {
        v.push_back(i);           // push the element at the end of vector...
    }
    cout<<v.size()<<endl;


    vector<int> vc(20);          // Declaration by size of vector!!!
    cout<<vc.size()<<endl;


    v.clear();                      // Clear the vector
    cout<<v.size()<<endl;


    vector<int> v1=vc;                // Another declaration
    vector<int> v2(vc);               // Another declaration


    vector<string> vstr(10,"jigs");         // Another declaration with initialized values
    cout<<vstr[1]<<endl;
    cout<<vstr[0]<<endl;


    vector< vector< int > > vec1;                     // Declaration of vector of vectors


    vc.insert(vc.begin()+3,5);                   // Insert an element at 4th position
    for(auto x : vc)                                // Iteration of vector|||
        cout<<x<<" ";
    cout<<endl;
    cout<<vc.size()<<endl;


    vc.erase(vc.begin()+5);                        // Delete an element at 6th position
    cout<<vc.size()<<endl;


    display(vc);                   // Use of function


    vector<int> ve(vc.begin(),vc.end());          // Another declaration
    return 0;

}
