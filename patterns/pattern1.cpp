#include <iostream>
using namespace std;

int main() {
    int n=5;
    int a=1;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout << a << " ";
            
        }
        cout << endl;
        a+=1;
    }

    return 0;
}
