#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    int i,a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int num=a[k-1],count=0;
    for(i=0;i<n;i++)
        if(num<=a[i] && a[i]>0)
            count++;
        else
            break;
    cout<<count;
    return 0;
}
