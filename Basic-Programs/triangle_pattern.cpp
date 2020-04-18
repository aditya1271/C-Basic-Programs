#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    while(i<n)
    {
      int j=0;
      while(j<(n-i))
        {
            cout<<" ";
            j++;
        }
      int l=i+1;int k=0;
      while(k<2*i+1)
      {

        cout<<l<<"  ";
        if(k<((2*i+1)/2))
            l++;
        else
            l--;
        k++;
      }
      cout<<endl;
      i++;
    }
    return 0;
}