#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    if(n<=1000)
    {

    for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(j>i)
                    cout<<'*';
                else
                    cout<<j;

            }
            cout<<endl;
        }
    }
    return 0;
}

