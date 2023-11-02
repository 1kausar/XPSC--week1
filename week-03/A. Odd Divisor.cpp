
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        if((n&1)) cout<<"YES"<<endl;
        else
        {
            if(!(n&(n-1))) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;

}
