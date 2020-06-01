#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,rem,div;
    cin>>n;
    rem=n%5;
    div=n/5;
    if(rem)
        div++;
    cout<<div;
    return 0;
}
