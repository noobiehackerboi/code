#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string a;
    cin>>a;
    int i,l=a.size();
    char ch;
    for(i=0;i<l;i++)
    {
        ch=tolower(a[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
            continue;
        else
            cout<<"."<<ch;
    }
    return 0;
}
