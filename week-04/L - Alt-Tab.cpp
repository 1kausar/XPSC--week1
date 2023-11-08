#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<string>v;
    for(int i=0 ; i<n ; i++)
    {
        string x; cin>>x;
        v.push_back(x);
    }

    stack<string>a;
    set<string>s;


    for(auto x:v)
    {

        a.push(x);

    }

    while(!a.empty())
    {
        string x=a.top();
        a.pop();

        if(!(s.count(x)))
        {
            s.insert(x);
            if(x.size()>2)
            {
                cout<<x.substr(x.size()-2);
            }
        }
    }
    return 0;

}
