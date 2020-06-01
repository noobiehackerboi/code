#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,x,find=0;
    cin>>n;
    int i,p[n],v[n],t[n];
    for(i=0;i<n;i++)
    {
        cin>>p[i]>>v[i]>>t[i];
        x=p[i]+v[i]+t[i];
        if(x>=2)
            find++;
    }
    cout<<find<<endl;
    return 0;
}
