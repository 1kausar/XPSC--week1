#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n; cin>>n;
    int a[n+1];

    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];

    }

    bool flage=false;
    for(int i=0 ; i<(1<<n) ; i++)
    {

        int sum=0;

        for(int j=0 ; j<n ; j++)
        {

            int mask=1<<j;
            if((i&mask))
            {
                sum+=a[j];
            }
            else
            {
                sum-=a[j];
            }
        }
        if(sum==0 || sum%360==0)
        {
            flage=true;
            break;
        }
    }
    if(flage) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
