//https://www.youtube.com/watch?v=58BrFvjNhWY
//for lambda expressions
#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::vector<int> v={ 34,6 ,7 ,8 ,8,9,1 , 0,1 ,2 ,3} ;
    sort(v.begin() , v.end() , [](int a , int b) {return a>b; });
    vector<int> v2(16 , 5);
    copy_if(v.begin() , v.end() , v2.begin() , [](int x){return x%2==0;});
    for(auto i : v2) cout<<i<<endl;
    
    // lambda functions
    [](){}; //it is valid state ment in c++ only gives warning 
    [](){ cout<<"hello world"<<endl }; //nothing will happen ....cause function is not called
    [](){ cout<<"hello world"<<endl }(); // hello world printed...
    
    int ry =100;
    [ry](){ cout<<ry<<endl;}(); // passing variable inside capchalist 
//   we can pass local variable inside anonymous functions (i.e lambda functions ) by value and refereance (i.e &ry ) 
    
    
    int x = []()-> int {return 100; }(); // for return type
    int x = []( int base )->int {return base+100; }(200); ///for arguments
   
    //function is in #include<functional>
    function<int(int)> functionPointer = [](int base)-> int{ return base + 100 ; };
    int returnValue = functionPointer(50);
    cout<<returnValue<<endl;
}
