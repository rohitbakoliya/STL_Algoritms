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
	
	
	vector< int > v{ 1, 2,3 ,4 ,5 , 6,7 , 8};
	long long sum = accumulate(all(v), (long long)0);
	double product = accumulate(all(v), double(1), multiplies< double >());
	
	
	vector< int > v1;
	vector< int > v2;
	for(int i = 0; i < 3; i++) {
	v1.push_back(10-i);
	v2.push_back(i+1);
	}
	int r = inner_product(all(v1), v2.begin(), 0);// r holds (v1[0]v2[0] + v1[1]v2[1] + v1[2]v2[2]), or (101+92+83), which is 52.
	int r1 = inner_product(all(v), v.rbegin(), 0); //V[0]*V[N-1] + V[1]+V[N-2] + ... + V[N-1]*V[0] where N is the number of elements in 'v'.



}
