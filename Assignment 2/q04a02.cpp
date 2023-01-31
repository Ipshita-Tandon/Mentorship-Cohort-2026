#include <iostream>     // 10/10

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    int i,j, k;
    for (i=1; i<=n; i++) {
        for (k=i-2; k>=0; k--) {
            cout<<"\t";
        }
        for (j=n+1-i; j>=1; j--) {
            cout<<"*\t";
        }
        cout<<"\n";
    }

    return 0;
}