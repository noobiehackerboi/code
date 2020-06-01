#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,x=0;
    cin>>t;
    for(;x<t;x++)
    {
        int n,k;
        cin>>n;
        k=n/2;
        if(n%2==1)
        {
            int i=0;
            cout<<"7";
            for(;i<k-1;i++)
                cout<<"1";
            cout<<endl;
        }
        else if(n%2==0)
        {
            int i=0;
            for(;i<k;i++)
                cout<<"1";
            cout<<endl;
        }
    }
    return 0;
}
