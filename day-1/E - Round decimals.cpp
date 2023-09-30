
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    double x;
    cin>>x;
    if(x<=9.999)
    {
        int k=x*1000;
        int fd=(k/100)%10;
        int ans=(k/1000)%10;
        if(fd>=5)
        {
            cout<<ans+1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    else
    {
        int k=x*1000;
        int fd=(k/100)%10;
        int ans=(int)x;
        if(fd>=5)
        {

            cout<<ans+1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}
