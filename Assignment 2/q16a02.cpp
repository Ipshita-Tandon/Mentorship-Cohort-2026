#include <iostream>     // 10/10

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    int i,j, k;
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            cout<<j<<"\t";
        }

        for(k=n-i; k>=1; k--) {
            cout<<"\t";
        }
        for(k=n-i-1; k>=1; k--) {
            cout<<"\t";
        }

        if (i != n) {
            for(j=i; j>=1; j--) {
                cout<<j<<"\t";
        }
        } else {
            for(j=i-1; j>=1; j--) {
                cout<<j<<"\t";            
        }
        }

        cout<<endl;

    }

    return 0;
}