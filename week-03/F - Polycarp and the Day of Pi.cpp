#include<iostream>
#include<string>
using namespace std;
const string pi="314159265358979323846264338327";
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        int flag=0;
        for(int i=0 ; i<st.size() ; i++)
        {
            if(st[i]==pi[i])
            {
                flag++;
            }
            else
                break;
        }
        cout<<flag<<endl;
    }
    return 0;
}
