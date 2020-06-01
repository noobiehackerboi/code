#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,n,rev=0,digit;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    while(a[i]>0)
	    {
	        digit=a[i]%10;
	        a[i]/=10;
	        rev=rev*10+digit;
	    }
	    a[i]=rev;
	    rev=0;
	}
	for(i=0;i<n;i++)
	    cout<<a[i]<<endl;
	return 0;
}
