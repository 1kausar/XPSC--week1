#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        set<char>s;
        string str; cin>>str;
        for(int i=0 ; i<str.size(); i++)
        {
            s.insert(str[i]);
        }
        cout<<"size is:"<<s.size()<<endl;

        if(!(s.size()%3))
        {
            cout<<s.size()/3<<endl;
        }
        else
        {
            cout<<(s.size()/3)+1<<endl;
        }
    }
    return 0;
}
