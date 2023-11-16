#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(!(n&1))
        {
            if(!(n%7))
            {
                cout<<"Alice"<<endl;
            }
            else cout<<"Charlie"<<endl;
        }
        else
        {
            if(!(n%9))
            {
                cout<<"Bob"<<endl;
            }
            else cout<<"Charlie"<<endl;
        }
    }
    return 0;
}
