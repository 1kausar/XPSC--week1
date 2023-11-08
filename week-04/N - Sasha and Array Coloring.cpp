#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0 ; i<n ; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(), v.end());
        if(n==1)
        cout<<0<<endl;
        else if(n==2)
        cout<<abs(v[0]-v[1])<<endl;
        else if(n==3)
        cout<<abs(v[0]-v[2])<<endl;
        else{
                int sum=0;
                int i=0, j=n-1;
                while(i<=j)
                {
                    sum+=abs(v[i]-v[j]);
                    i++;
                    j--;
                }
                cout<<sum<<endl;

        }

    }
    return 0;
}
