#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
   if( n <=1000000000 && n>0 )
    {
        int m=1,s=0;
        while(n>0)
        {
            s=s+m*(n%10);
            n=n/10;
            m=m*2;

        }
        cout<<s;
    }
   return 0;
}