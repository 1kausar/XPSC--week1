#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(abs(x-y)>y) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
