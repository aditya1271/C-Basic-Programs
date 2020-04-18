#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<=1000 && n >0)
    {
        cout<<'0'<<endl;
        int a=0,b=1,c=1;
        while(c<=n)
        {
            cout<<c<<endl;
            c=a+b;
            a=b;
            b=c;
        }

    }

    return 0;
}