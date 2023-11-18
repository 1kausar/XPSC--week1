#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>50)
        {
            int cnt=0;
            while(n>50)
            {
                cnt++;
                n-=3;
            }
            if(n<50)
            {
                if(n==49)
                {
                    cout<<cnt+3<<endl;

                }
                else if(n==48)
                {
                    cout<<cnt+1<<endl;
                }
            }
            else if(n==50)
            {
                cout<<cnt<<endl;
            }
        }
        else if(n<50)
        {
            int cnt=0;
            while(n<50)
            {
                cnt++;
                n+=2;
            }
            if(n>50)
            {
                if(n==51)
                {
                    cout<<cnt+2<<endl;

                }
            }
            else if(n==50)
            {
                cout<<cnt<<endl;
            }

        }
        else
        {
            cout<<0<<endl;
        }
    }
}
