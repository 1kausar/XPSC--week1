
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    double x;
    cin>>x;
    vector<int>v;
    if(x>=0 && x<=9)
    {
        for(int i=0 ; i<4-1 ; i++)
        {
            v.push_back(0);
        }
        v.push_back(x);

    }
    else if(x>=10 && x<=99)
    {
        for(int i=0 ; i<4-2 ; i++)
        {
            v.push_back(0);
        }
        v.push_back(x);
    }
    else if(x>=100 && x<=999)
    {
        for(int i=0 ; i<4-3 ; i++)
        {
            v.push_back(0);
        }
        v.push_back(x);
    }
    else
    {
        v.push_back(x);
    }

    for(auto x:v)
    {
        cout<<x;
    }
    cout<<endl;
}
