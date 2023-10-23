#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,res,mx=INT_MIN;
    cin>>n;
    int a[n+1];
    for(int i=0 ; i<n ; i++)
    {
      cin>>a[i];
    }

    for(int i=2 ; i<=1000 ; i++)
    {
        int cnt=0;
        for(int j=0 ; j<n ; j++)
        {
            if(a[j]%i==0) cnt++;
        }
        if(cnt>mx)
        {
            mx=cnt;
            res=i;
        }

    }
    cout<<res<<endl;
}
