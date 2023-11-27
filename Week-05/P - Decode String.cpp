#include<bits/stdc++.h>
using namespace std;

char intToAlphabetic(int num)
{
    return static_cast<char>(num - 1 + 'a');
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        string temp;

        for(int i=0 ; i<n ; i++)
        {
            if((i+2<n && s[i+2]=='0') && (i+3>=n || s[i+3]!='0'))
            {
                int x=( ((s[i]-'0')*10) + (s[i+1]-'0')  );
                char ch=intToAlphabetic(x);
                temp.push_back(ch);
                i+=2;

            }

            else
            {

                temp.push_back(s[i]+'0');
            }
        }
        cout<<temp<<endl;


    }
}
