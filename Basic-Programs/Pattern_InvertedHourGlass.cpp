#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    if(1)
    {

    for(int i=0;i<=n;i++)
        {
            for(int j=n;j>=0;j--)
            {
                if(n-j<=i)
                    cout<<j<<" ";
                else
                    cout<<"  ";
            }
            for(int j=1;j<=n;j++)
            {
                if(n-j<=i)
                    cout<<j<<" ";
                else
                    cout<<"  ";
            }
        cout<<endl;
        }



    for(int i=n-1;i>=0;i--)
        {
            for(int j=n;j>=0;j--)
            {
                if(n-j<=i)
                    cout<<j<<" ";
                else
                    cout<<"  ";
            }
            for(int j=1;j<=n;j++)
            {
                if(n-j<=i)
                    cout<<j<<" ";
                else
                    cout<<"  ";
            }
        cout<<endl;
        }
    }

    return 0;
}