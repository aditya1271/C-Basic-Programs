#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    if(n<=1000)
    {
    cout<<1<<endl;
    for(int i=1;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {

                    if(j==0 || j==i)
                        cout<<i;
                    else
                        cout<<'0';

            }
            cout<<endl;
        }
    }
    return 0;
}
