#include <bits/stdc++.h>
using namespace std;
int multi( int x, int y)
{
    return x*y;
}
int fun()
{
    static int i=0; //Static variables when used inside function 
    //are initialized only once, and then they hold there value even through function calls.
    i++;
    return i*i;
}
int increment(int x)
{
    return (x+1);
}
void twice( int a)
{
    cout<<a*2<<" ";
}
int main() {
	// your code goes here
	vector<int> v { 1,2, 3, 64,7, 7,4 ,3 , 1};
	vector<int> v1 {9 , 8 , 7, 6, 5, 4, 3, 2, 1};
    vector<int> vect(9);
	for(auto x : v)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	rotate(v.begin(), v.begin()+3 , v.end());// left shift 
	rotate(v.begin(),v.begin()+v.size()-3  , v.end());  //right shift
	shuffle(v.begin(), v.end(), default_random_engine(0));   
  cout<<count(v.begin(), v.end(), 3)<<endl;
 	int sum =0;
 	cout<<accumulate(v.begin() , v.end() , sum)<<endl;
 	int mul =1;
 	cout<<accumulate(v.begin() , v.end() , mul , multi)<<endl;
 	int a[7];
 	partial_sum(v.begin() , v.end() , a);  //useful in prifix sum 
 	for(int i=0;i<7;i++)
 	cout<<" "<<a[i]<<" ";
 	cout<<endl;
 	auto x =find(v.begin(), v.end() , 64);//for unsorted vector
 	cout<<x-v.begin()+1<<endl;
  sort(v.begin() , v.end());
  auto y = equal_range(v.begin(), v.end(), 64);
  fill(v.begin(), v.end() , 45);
  generate(v.begin() , v.end() , fun);
  iota(v.begin(), v.end() , 45);  // it give numbers like 45 , 46 , 47, 48...
  replace(v.begin() , v.end(), 3 , -999);    
  remove(v.begin(), v.end() , 64);// it still gives whole vector
//i.e. last shifted element are same as previous
  v.erase(remove(v.begin() , v.end() , 3 ) , v.end()); // now size of vector also decreases
  unique(v.begin() , v.end()); //it only removes adjacent number to make adjacent uinque but size of vector is stillsame  
//  so we can erase as previous
  v.erase(unique(v.begin() , v.end() ) , v.end()); //it may quite useful after sorting 
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()) , v.end());// now all elements have one frequency
  for_each(v.begin() , v.end() , twice);
  transform( v.begin() , v.end() , v.begin(), increment);
  cout<<endl;
  
  for(int i =0 ; i< v.size(); i++)
	cout<<v[i]<<" ";
	cout<<endl;
}
