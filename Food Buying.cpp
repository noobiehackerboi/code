#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int s,tens,sum=0;
        cin>>s;
        for(;s>0;)
        {
            tens=s/10;
            s-=tens*10;
            s+=tens;
            sum+=tens*10;
            if(s>=10 && s<=18)
            {
                s-=10;
                s++;
                sum+=10;
                if(s)
                {
                    sum+=s;
                    s=0;
                }
            }
            else if(s<=9)
            {
                sum+=s;
                s=0;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
