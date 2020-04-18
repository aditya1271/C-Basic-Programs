#include <iostream>

using namespace std;

int main()
{
    int a,b,ans;
    cin>>a>>b;
    ans=1;
    for(int i=0;i<b;i++)
        ans=ans*a;
    cout<<ans;
   return 0;
}