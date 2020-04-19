#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<=1000 && n >0)
    {

        int a=0,b=1,c=1;
        while(--n)
        {

            c=a+b;
            a=b;
            b=c;

        }
        cout<<c<<endl;

    }

    return 0;
}