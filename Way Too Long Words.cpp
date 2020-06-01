#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        int l=n.size();
        if(l>=11)
            cout<<n[0]<<l-2<<n[l-1]<<endl;
        else
            cout<<n<<endl;
    }
    return 0;
}
