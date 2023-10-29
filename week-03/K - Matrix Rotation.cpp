#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int a[5][5];
        for(int i=1 ; i<=2 ; i++)
        {
            for(int j=1 ; j<=2 ; j++)
            {
                cin>>a[i][j];
            }

        }
        int k=1;
        bool flage=false;
        while(k<=4)
        {
            bool ans=false;
            for(int i=1 ; i<=1 ; i++)
            {
                for(int j=1 ; j<=1 ; j++)
                {
                    if(a[i][j]<a[i][j+1] && a[i][j]< a[i+1][j] &&
                            a[i][j+1]<a[i+1][j+1] && a[i+1][j]<a[i+1][j+1] )
                    {
                        flage=true;
                        ans=true;

                    }

                }

            }
            if(ans)
            {
                break;
            }
            else
            {
                k++;
                int x=a[1][1];
                int y=a[1][2];
                int m=a[2][1];
                int z=a[2][2];

                for(int i=1 ; i<=2 ; i++)
                {
                    for(int j=1 ; j<=2 ; j++)
                    {
                        if(i==1 && j==1)
                        {
                            a[i][j]=m;
                        }
                        else if(i==1 && j==2)
                        {
                            a[i][j]=x;
                        }
                        else if(i==2 && j==1)
                        {
                            a[i][j]=z;
                        }
                        else if(i==2 && j==2)
                        {
                            a[i][j]=y;
                        }
                    }
                }

            }
        }
        if(flage)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
