#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x=(3*n)+m;
        int y=(m*2)+n;

        cout<<min(x,y)<<endl;
    }
}
