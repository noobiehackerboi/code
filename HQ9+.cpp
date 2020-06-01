#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    char ch;
    int l=s.size(),find=0;
    while(l--)
    {
        ch=s[l];
        if(ch=='H' || ch=='Q' || ch=='9')
        {
            find=1;
            break;
        }
    }
    if(find)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
