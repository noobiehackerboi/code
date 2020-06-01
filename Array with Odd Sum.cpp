#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,even=0,odd=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]%2)
                odd++;
            else
                even++;
        }
        if(odd==0)
            cout<<"NO\n";
        else if(even==0 && odd%2==1)
            cout<<"YES\n";
        else if(even==0 && odd%2==0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
