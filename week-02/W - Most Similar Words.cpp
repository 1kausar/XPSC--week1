#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t; cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        vector<string>v;
        vector<int>r;
        while(k--)
        {
            string s; cin>>s;
            v.push_back(s);

        }
        for(int i=0 ; i<v.size() ; i++)
        {
            for(int j=0 ; j<v.size() ; j++)
            {
                if(i==j) continue;
                else
                {
                    int ans=0;
                    string a=v[i];
                    string b=v[j];

                    for(int k=0 ; k<a.size() ; k++)
                    {
                        ans+=abs(a[k]-b[k]);
                    }
                    r.push_back(ans);

                }
            }
        }
        sort(r.begin(),r.end());
        cout<<r[0]<<endl;
    }
    return 0;
}
