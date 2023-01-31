#include <iostream>     // 10/10

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    int i,j,k;
    int num=n/2+1;

    // lower triangle
    for(i=num-1; i>=1; i--) {
        for(k=num-i-1; k>=1; k--) {
            cout<<"\t";
        }
        cout<<"*\t";
        for(j=1; j<=i; j++) {
            cout<<"\t";
        }
        for(j=i-1; j>=1; j--) {
            cout<<"\t";
        }
        
        cout<<"*\t";
        cout<<"\n";
    }


    // upper triangle
    for(i=0; i<=num-1; i++) {
        for(k=num-i-1; k>=1; k--) {
            cout<<"\t";
        }
        cout<<"*\t";
        for(j=1; j<=i; j++) {
            cout<<"\t";
        }
        for(j=i-1; j>=1; j--) {
            cout<<"\t";
        }

        if (i != 0) {
            cout<<"*\t";
        }
        
        cout<<"\n";
    }

    return 0;
}