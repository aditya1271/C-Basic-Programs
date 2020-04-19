#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    if(n<=1000)
    {

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if((i+1)%2!=0)
                    cout<<"1";
                else
                {
                    if(j==0 || j==i)
                        cout<<'1';
                    else
                        cout<<'0';
                }
            }
            cout<<endl;
        }
    }
    return 0;
}