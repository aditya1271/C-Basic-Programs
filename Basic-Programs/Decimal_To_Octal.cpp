#include <iostream>

using namespace std;

int main()
{   int a,r=0,n=0,flag=0;
    cin>>a;
    if(a<=1000000000&& a>0)
    {
        while(a>0)
        {
            n=10*n+a%8;
            a=a/8;
            flag++;
        }


    while(n>0)
    {   r=10*r+n%10;
        n=n/10;
    }


        int check =r;
        while(check>0)
        {
            flag--;
            check=check/10;
        }
        while(flag)
        {
            r=r*10;
            flag--;
        }
    cout<<r<<endl;;
    }

    return 0;
}
