#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int i,arr[n],odd=0,even=0,poso,pose;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2)
        {
            odd++;
            poso=i+1;
        }
        else
        {
            even++;
            pose=i+1;
        }
    }
    if(even==1)
        cout<<pose;
    if(odd==1)
        cout<<poso;
    return 0;
}
