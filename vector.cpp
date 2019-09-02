#include<iostream>
#include<vector>
#include<utility>
using namespace std;
void some_function( vector<int> &v)
{
	//there new copy of vector is not created
	for(auto &x : v)
	{
		x++;
	}
}
void some_another(const vector<int> &v)
{
	//there also new copy of vector is not created
}
/*template is pre-defined like this ...*/

// template<typename x , typename y> struct pair{
// 	x first;
// 	y secound;
// };

template <typename T> void reverse_array(T *first , T *last)
{
	if(first!=last)
	{
		while(true)
		{
			swap(*first , *last);
			first++;
			if(first==last)
			break;
			last--;
			if(first==last)
			break;
		}
	}
}
int main(){
	
	vector<int> v(10 ,5);
	vector<int> v1(v);
	//or//
	//vector< int > v1 = v;   
	v.insert(v.begin()+2 , 3);
	v.insert(v.begin()+4 , 6);
	v.insert(v.begin()+1 , 999);
	v.erase(v.begin()+1);
	vector< vector < int > > matrix(10 , vector<int>(20 , -1));
	//some_function(v);
	pair < string ,pair < int , int> > p;
	p.first="rohit";
	p.second.first=34;
	p.second.second=89;
	cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
	int a[6]={1, 2, 3, 4, 5, 6};
	reverse_array(a , a+5);
	for(int x : a)
	cout<<x<<" ";
	cout<<endl;
	for(auto x : v)
	cout<<x<<" ";
	return 0;
}
