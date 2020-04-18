#include <iostream>

using namespace std;

int main()
{
    int a,b,gcd;
    cin>>a>>b;
   if( a>0&&a <1000000000&& b>0 && b<1000000000)
    {

        if(b>a)
          {
            a=a+b;
            b=a-b;
            a=a-b;
          }

        if(a%b!=0)
            {
                for(int i=1;i<=b/2;i++)
                    if(b%i==0&&a%i==0)
                        gcd=i;
                cout<<gcd;
            }
        else
            cout<<b;


    }
   return 0;
}
