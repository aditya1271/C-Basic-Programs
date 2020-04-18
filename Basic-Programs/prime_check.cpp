#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    cin>>n;

    {   int flag=1,j=2;
        while(j<n/2+1)
            {
                if(n%j==0)
                    flag=0;
                j++;
            }
        if(flag)
            cout<<"Prime";

        else
            cout<<"Not Prime";
    }

    return 0;
}