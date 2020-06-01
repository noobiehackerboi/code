#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,x=0;
    cin>>n;
    string ch;
    while(n--)
    {
        cin>>ch;
        if(ch[1]=='+')
            x++;
        else if(ch[1]=='-')
            x--;
    }
    cout<<x;
    return 0;
}
