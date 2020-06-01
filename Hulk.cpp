#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    cout<<"I hate ";
    if(n%2==0)
    while(--n)
    {
        if(n%2)
            cout<<"that I love ";
        else
            cout<<"that I hate ";
    }
    else
    while(--n)
    {
        if(n%2==0)
            cout<<"that I love ";
        else
            cout<<"that I hate ";
    }
    cout<<"it";
    return 0;
}
