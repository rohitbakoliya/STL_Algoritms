#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<utility>
#define all(c) c.begin(), c.end()
#define tr(container, it) \
for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
//here present is for map , set 
//and cpresent is for vector 
using namespace std;
int main()
{
	set<int> s;
	for(int i=1 ; i<=10 ; i++)
	{
		s.insert(i);
	}
	s.insert(5);//already in set 
	s.insert(1);//already in set duplicate not possible
	s.insert(0);
	for(int j=0 ; j<=10 ; j+=2)
	s.erase(j);
	
	// cout<<s.size()<<endl;
	int n = (int )s.size();
	// cout<<endl<<n<<endl;
	
	int sum =0;
	for(set<int> :: iterator it = s.begin() ; it!= s.end() ; it++)
	sum+=*it;
	// cout<<sum<<endl;
	set< pair < string , pair < int , vector < int > > > > ss; // how to iterate? 
	int total = 0;
	tr(ss , it)
	{
		total += it->second.first;
	}
	if(s.find(42)!=s.end())
	{
		cout<<"element is present\n";
	}
	else
	cout<<"element is not present \n";
	/*here note that find() function not belongs to std namespace 
	i.e this find() is not globle as for vector 
	this is belongs to set::find()
	it takes O(log N) time 
	and count() function also
	*/
	
	cout<<total <<endl;
	for(auto x : s)
	cout<<x<<" ";
	
	return 0;
}
