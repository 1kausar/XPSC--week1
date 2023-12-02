#include<bits/stdc++.h>
#define ll long long
#define sp " "
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        if(n==0) cout<<"3 1 6 7"<<endl;
        else if(n==1) cout<<"1 4 3 2"<<endl;
        else if(n==2) cout<<"2 4 3 1"<<endl;
        else if(n==3) cout<<"1 2 4 7"<<endl;

        else
        {
            ll d=n^3;
            cout<<"1"<<sp<<"2"<<sp<<"3"<<sp<<d<<endl;
        }
    }
}
