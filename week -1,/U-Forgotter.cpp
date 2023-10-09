#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n; cin>>n;
    set<int>s;
    for(int i=0 ; i<n-1 ; i++)
    {
        int x;cin>>x;
        s.insert(x);
    }
    for(int i=1 ; i<=n ; i++)
    {
        if(s.count(i)==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
