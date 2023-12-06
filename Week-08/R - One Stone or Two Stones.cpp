#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        if(abs(a-b)>=2)
        {
            if(a>b) cout<<"CHEF"<<endl;
            else cout<<"CHEFINA"<<endl;
        }
        else if(a==b)
        {
            if(b&1) cout<<"CHEF"<<endl;
            else cout<<"CHEFINA"<<endl;
        }
        else
        {
            int mn=min(a,b);
            if(mn&1) cout<<"CHEF"<<endl;
            else cout<<"CHEFINA"<<endl;
        }
    }
}
