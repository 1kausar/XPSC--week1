#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    int sum=0,cnt;
    int i=0,j=0,ans=INT_MIN;
    while(j<=n)
    {
        sum+=a[j];
        while(sum>k)
        {

            sum-=a[i];
            i++;
        }
        if(sum==k)
        {
            cnt=j-i+1;
            ans=max(ans,cnt);
            sum-=a[i];
            i++;
        }
        j++;
    }
    cout<<ans<<endl;
}
