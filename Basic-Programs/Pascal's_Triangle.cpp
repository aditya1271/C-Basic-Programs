#include <iostream>
using namespace std;

int main()
{
    int n,f=1;
    cin >> n;

    for(int i=0;i<n;i++)
    {

        for(int j=0;j<=i;j++)
        {
            if (j== 0||i ==0)
                f = 1;
            else
                f=f*(i-j+1)/j;

            cout<<f<<"    ";
        }
        cout << endl;
    }

    return 0;
}