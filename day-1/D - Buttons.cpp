
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    if(n==m)
    cout<<n+m<<endl;
    else if(n>m)
    {
        cout<<n+(n-1)<<endl;
    }
    else
    cout<<m+(m-1)<<endl;
}
