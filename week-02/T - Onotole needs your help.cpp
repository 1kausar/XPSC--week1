#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n+1];
    map<int,int>mp;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto x:mp)
    {
        if((x.second) == 1)
        {

        cout<<x.first<<endl;
        break;
        }
    }
    return 0;
}
