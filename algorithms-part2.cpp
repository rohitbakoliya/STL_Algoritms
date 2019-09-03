#include<iostream>
#include<vector>
#include<algorithm>
#define all(c) c.begin(), c.end()
using namespace std;
int main()
{
	vector<int > vect { 2  ,3  , 1 };
	sort(vect.begin() , vect.end());
	do{
		for( auto x : vect)
		cout<<x<<" ";
		cout<<endl;
	}while(next_permutation(vect.begin() , vect.end()));
	
	cout<<endl;
	vector < int > vect1 { 1 , 2, 3};
	reverse(all(vect1));
	do{
		for(auto k : vect1)
		{
			cout<<k<<" ";
		}
		cout<<endl;
	}while(prev_permutation(all(vect1)));
	
}
