#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    unsigned long long int m,n,a,l,b;
    cin>>m>>n>>a;
    l=m/a;
    b=n/a;
    if(l*a<m)
        l++;
    if(b*a<n)
        b++; 
    cout<<l*b;
    return 0;
}
