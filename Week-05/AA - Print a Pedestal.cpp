#include<bits/stdc++.h>
#define sp " "
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int x=n/3;

        int ext=n-(x*3)+1;

        if(ext==3)
        {
            int f,s,t;
            t=x-1;
            f=x+2;
            s=x+1;
            cout<<s<<sp<<f<<sp<<t<<endl;;
            continue;
        }
        else if(ext==2)
        {
            int f,s,t;
            t=x-1;
            f=x+2;
            s=x;
            cout<<s<<sp<<f<<sp<<t<<endl;;
            continue;
        }
        else if(ext==1)
        {
            int f,s,t;
            t=x-1;
            f=x+1;
            s=x;
            cout<<s<<sp<<f<<sp<<t<<endl;
            continue;
        }




    }
    return 0;
}
