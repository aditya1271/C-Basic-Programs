#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<100 && n >0)
    {
        cout<<'0'<<endl;

        int a=0,b=1,c=1;
    for(int i=1;i<n;i++)
        {
            for(int j =0;j<=i;j++)
            {
            cout<<c<<"  ";
            c=a+b;
            a=b;
            b=c;
            }
            cout<<endl;
        }

    }

    return 0;
}