#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    if(1)
    {

    for(int i=0;i<n;i++)
        {   int space=i;

            for(int j=n;j>=0;j--)
                if(space)
                    {
                        cout<<"  ";
                        space--;
                        }
                else
                    cout<<j<<" ";

            for(int j=1;j<=n-i;j++)

                    cout<<j<<" ";


            cout<<endl;
        }

    for(int i=n;i>=0;i--)
        {   int space=i;

            for(int j=n;j>=0;j--)
                if(space)
                    {
                        cout<<"  ";
                        space--;
                        }
                else
                    cout<<j<<" ";

            for(int j=1;j<=n-i;j++)

                    cout<<j<<" ";


            cout<<endl;
        }



    }

    return 0;
}
