#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t,k,cnt;
    cin>>t>>k;
    while(t--)
    {
        int x;
        cin>>x;
        if(x%k==0) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
