#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    int cnt=0;
    while(n<=m)
    {
        cnt++;
        n++;
    }
    cout<<cnt<<endl;
}
