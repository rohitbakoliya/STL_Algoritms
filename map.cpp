#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;
void fun_map(const map<string , int> &m)
{
	/*if(m["git"]==34)//this statement throws errors 
	{
		// Cannot use [] on const map objects
	}*/
	/*but we can do like this*/
	if(m.find("git")!=m.end() && m.find("git")->second==34)
	cout<<"yupppp\n";
}
int main()
{
	map< string, int > mp;
	mp["rohit"] = 1; 
	mp["git"]=34;
	mp["hub"]= 47;
	mp["pro"]=637;
	
	int x = mp["rohit"]+mp["pro"];
	cout<<x<<endl;
	
	if(mp.find("pro")!=mp.end())
	{
		cout<<"rohit bakoliya has a pro tag\n";
	}
	else
	mp.erase("rohit"); 
	
	fun_map(mp);
	
	
}
