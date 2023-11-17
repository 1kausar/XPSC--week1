#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        double a,b;
        cin>>a>>b;
        double x=a*0.1;
        double y=a-x;

        if(y<b) cout<<"ONLINE"<<endl;
        else if(y>b) cout<<"DINING"<<endl;
        else if(y==b) cout<<"EITHER"<<endl;
    }
}
