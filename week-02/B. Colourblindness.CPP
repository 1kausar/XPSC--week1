
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {

      int n; cin>>n;
      string x,y;
      cin>>x>>y;

    //   char B,G;
    //   B=G;
    //   G=B;

      bool flage =false;
      for(int i=0 ; i<n ; i++)
      {
        if(x[i]!=y[i])
        {
            if((x[i]=='G' || x[i]=='B') && (y[i]=='G' || y[i]=='B'))
            {
            flage=false;
            }
            else
            {
                flage=true;
                break;
            }
        }
      }
      if(flage) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;

    }
    return 0;

}
