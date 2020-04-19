#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    if(n%2!=0)
    {

    for(int i=0;i<n/2+1;i++)
        {
            int t=i+1;

            for(int j=0;j<n;j++)

            {
                if(i+j==n-1)
                    cout<<t<<" ";
                else if(j<n-2*i-1)
                    cout<<"  ";
                else
                {
                    if(t>1)
                    {   cout<<t<<" ";
                        t--;}
                }
            }
            t=1;
            int space=2*i-1;


            for(int j=0;j<n+n/2-1&&i!=0;j++)
            {
                if(space)
                    {cout<<"  ";
                        space--;
                    }
                else if(t<=n/2+1 &&t<=i+1)
                    {
                     cout<<t++<<" ";

                    }


            }
            cout<<endl;
        }




           for(int i=n/2-1;i>=0;i--)
        {   int t=i+1;
            for(int j=0;j<n;j++)
            {
                if(i+j==n-1)
                    cout<<t<<" ";
                else if(j<n-2*i-1)
                    cout<<"  ";
                else
                {
                    if(t>1)
                    {   cout<<t<<" ";
                        t--;}
                }
            }



            t=1;
            int space=2*i-1;
           for(int j=0;j<n+n/2&&i!=0;j++)
            {
                if(space)
                    {cout<<"  ";
                        space--;
                    }
                else if(t<=n/2+1 &&t<=i+1)
                    {
                     cout<<t++<<" ";

                    }


            }
            cout<<endl;
        }



        }

    return 0;
}
