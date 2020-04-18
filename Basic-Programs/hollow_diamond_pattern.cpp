#include <iostream>

using namespace std;

int main()
{
    int n,a=0;
    cin>>n;
    if(n%2!=0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
               {
                   if(i<=n/2)

                   {
                       if(( j==n/2 || ( j>=n/2-i+1 && j<=n/2+i-1) ) && i!=0)
                        {
                            cout<<"     ";

                        }
                       else
                        cout<<"*    ";

                   }
                   else
                   {
                       if(( j==n/2 || ( j>=n/2-(n-i-1)+1 && j<=n/2+(n-i-1)-1 ) )&& i!=n-1)
                   {
                       cout<<"     ";

                   }
                    else
                    cout<<"*    ";

                   }
                 }

            cout<<endl;

        }
    }
    return 0;

}