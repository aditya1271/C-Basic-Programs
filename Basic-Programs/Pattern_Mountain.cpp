#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    if(n<10)
    {
    for(int i=1;i<=n;i++)
        {
           for(int j=1;j<=n;j++)
           {
               if(j>i && i!=n)
                    cout<<"     ";
               else
                    cout<<j<<"    ";

           }

            for(int j=n-1;j>0;j--)
           {
               if(j>i && i!=n  )
                    cout<<"     ";
               else
                    cout<<j<<"    ";

           }
           cout<<endl;
        }

        }

    return 0;
}