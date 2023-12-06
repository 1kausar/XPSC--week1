#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int h,a,s;
        cin>>h>>a>>s;

        int cnt=1;
        h-=s;
        if(h>0)
        {
            int x=(h/a);
            if(h%a!=0)
            {
                cout<<cnt+x+1<<endl;
            }
            else
            {
                cout<<cnt+x<<endl;
            }

        }
        else
        {
            cout<<cnt<<endl;
        }
    }
}
