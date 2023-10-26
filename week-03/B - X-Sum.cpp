#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int mx=INT_MIN;
        int n,m ; cin>>n>>m;
        int a[n][m];
        for(int i=0 ; i<n ; i++)
        {

            for(int j=0 ; j<m ; j++)
            {

                cin>>a[i][j];
            }
        }

        for(int i=0 ; i<n ; i++)
        {

            for(int j=0 ; j<m ; j++)
            {

                int sum=0;
                int ni=i,nj=j;
                while(ni>=0 && ni<n && nj>=0 && nj<m)
                {
                    sum+=a[ni][nj];
                    ni--;
                    nj--;
                }

               int si=i,sj=j;
                while(si>=0 && si<n && sj>=0 && sj<m)
                {
                    sum+=a[si][sj];
                    si--;
                    sj++;
                }

               int ti=i,tj=j;
                while(ti>=0 && ti<n && tj>=0 && tj<m)
                {
                    sum+=a[ti][tj];
                    ti++;
                    tj--;
                }

             int   pi=i,pj=j;
                while(pi>=0 && pi<n && pj>=0 && pj<m)
                {
                    sum+=a[pi][pj];
                    pi++;
                    pj++;

                }

                sum=sum-(3*a[i][j]);
                mx=max(sum,mx);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
