#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    if(n>=5)
    {

    for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!j||j==n/2   )
                    cout<<"*";
                else if(j<n/2)
                    cout<<" ";
                else if(!i)
                    cout<<"*";


            }
            cout<<endl;
        }
        for(int j=0;j<n;j++)
            cout<<"*";
        cout<<endl;

        for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==n/2-1&&j<n/2+1)
                    cout<<"*";
                else if(j==n/2 )
                    cout<<"*";
                else if(j==n-1)
                    cout<<"*";
                else
                    cout<<" ";



            }
            cout<<endl;
        }
    }

    return 0;
}
