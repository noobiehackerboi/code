#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> v;
	int i=0,temp,length=0;
	while(cin>>temp)
	{
	  if(temp==42)
		  break;
		v.push_back(temp);
		length++;
	}
	while(i<length)
	{
		cout<<v[i]<<endl;
		i++;
	}
	return 0;
}
