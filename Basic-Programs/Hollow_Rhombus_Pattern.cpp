#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    if(n>=5)
    {

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<2*n;j++)
                if(j<=n-i-1)
                    cout<<" ";
                else if (!i||j==n-i||(i==n-1 && j<=n)||j==2*n-i-1)
                    cout<<"*";
                else
                    cout<<" ";

            cout<<endl;
        }
    }

    return 0;
}
