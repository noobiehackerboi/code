#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int m,n,ans=0;
    cin>>m>>n;
    ans+=m*(n/2);
    if(n%2)
        ans+=m/2;
    cout<<ans;
    return 0;
}
