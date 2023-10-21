#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int i=0;
    while(i<=100000)
    {
        n++;
        set<int>s;
        int a=n%10;
        s.insert(a);
        int b=(n/10)%10;
        s.insert(b);
        int c=(n/100)%10;
        s.insert(c);
        int d=(n/1000)%10;
        s.insert(d);
        if(s.size()==4)
        {

            cout<<n<<endl;
            break;
        }

        i++;
    }

    return 0;
}

