#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::vector<int> v={ 34,6 ,7 ,8 ,8,9,1 , 0,1 ,2 ,3} ;
    sort(v.begin() , v.end() , [](int a , int b) {return a>b; });
    vector<int> v2(16 , 5);
    copy_if(v.begin() , v.end() , v2.begin() , [](int x){return x%2==0;});
    for(auto i : v2) cout<<i<<endl;
}
