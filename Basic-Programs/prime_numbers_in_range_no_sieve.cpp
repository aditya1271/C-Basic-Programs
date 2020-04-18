#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    cin>>n;
    int i=2;
    while(i<n+1)
    {   int flag=1,j=2;
        while(j<i/2+1)
            {
                if(i%j==0)
                    flag=0;
                j++;
            }
        if(flag)
            {cout<<i<<endl;}
        i++;
    }

    return 0;
}