#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ; cin>>t;
    while(t--)
    {
        int n,m,h;
        cin>>n>>m>>h;

       vector<long long>a(n),b(m);
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }

        for(int j=0 ; j<m ; j++)
        {
            cin>>b[j];
        }

        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
        long long sum=0;
        for(int i=0 ; i<min(n,m) ; i++)
        {
            sum+=min((h*b[i]),a[i]);
        }
        cout<<sum<<endl;
    }
}
