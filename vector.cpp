#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#define all(c) c.begin(), c.end()
#define tr(container, it) \
for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
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
	
	vector<int> v(6 ,5);
	vector<int> v1(v);
	//or//
	//vector< int > v1 = v;
	v.push_back(27);
	v.push_back(13);
	v.insert(v.begin()+2 , 3);
	v.insert(v.begin()+4 , 6);
	v.insert(v.begin()+1 , 999);
	v.erase(v.begin()+1);
	// v.erase(v.begin()+3, v.begin()+7);
	vector< vector < int > > matrix(10 , vector<int>(20 , -1));
	//some_function(v);
	pair < string ,pair < int , int> > p;
	p.first="rohit";
	p.second.first=34;
	p.second.second=89;
	//cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
	int a[6]={1, 2, 3, 4, 5, 6};
	reverse_array(a , a+5); //notice here a+5 not a+6 bcs function is not taking iterator
	//whereas it takes position
	// for(int x : a)
	// cout<<x<<" ";
	// cout<<endl;
	
	vector<int> v3(v.begin() , v.begin()+v.size()/2); //v3 is half of vector v. 
	
	//v.end()=v.begin()+v.size()
	
	vector<int> v4(v.begin() , v.end());
	vector<int> v5(v.rbegin() , v.rend());
	vector<int> v6(v.rbegin() , v.rbegin()+v.size()/2);
	vector<int> v7(v.rbegin()+v.size()/2 , v.rend());
	
	vector<int> :: iterator it = find(v.begin(), v.end(), 13);
	int pos = it - v.begin();
	if(it!=v.end())
	{
		cout<<"\n13 is present at pos : "<<pos<<endl;
	}
	
	vector<int> v8 ( a, a+6); //a+6 pointing to next to the last element
	for(vector<int> :: iterator it=v8.begin() ; it!=v8.end() ; it++)
	*it++;
	
	int max = *max_element(v.begin() , v.end());
	auto itr = max_element(v.begin() , v.end());
	int index = itr - v.begin();
	/*or*/
	int index1 = min_element(v.begin(), v.end())-v.begin();
	cout<<"index of minimum element : "<<index1<<endl;
	cout<<"max elemnt : "<<max<<" index is : "<<index<<endl;
	sort(v.begin() , v.end()); 
	/*or*/
	//sort(all(v));
	sort(all(v8) ,greater<int>());
	/*or*/
	//sort(v8.rbegin() , v8.rend());
	for(auto x : v8)
	cout<<x<<" ";cout<<endl;
	
	for(auto x : v)
	cout<<x<<" ";
	return 0;
}
