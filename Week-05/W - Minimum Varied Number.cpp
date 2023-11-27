#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int sum=0;
        vector<int>v={9,8,7,6,5,4,3,2,1};
        vector<int>ans;
        if(n>9)
        {
            sum+=v[0];
            ans.push_back(v[0]);
            for(int i=1 ; i<=8 ; i++)
            {

                if(sum<n)
                {
                    sum+=v[i];
                    ans.push_back(v[i]);
                    if(sum>n)
                    {
                        sum-=v[i];
                        ans.pop_back();
                    }
                }
                else if(sum>n)
                {
                    continue;
                }
                else if(sum==n)
                {
                    break;
                }
            }
        reverse(ans.begin(),ans.end());
        for(auto x:ans)
        {
            cout<<x;
        }
        cout<<endl;
        }
        else if(n<=9)
        {
            cout<<n<<endl;
        }
    }
}
