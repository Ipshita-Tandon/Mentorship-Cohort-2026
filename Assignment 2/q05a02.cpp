#include <iostream>     // 10/10

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    int i,j,k;
    int num=n/2+1;

    // upper triangle
    for(i=1; i<=num; i++) {
        for(k=num-i-1; k>=0; k--) {
            cout<<"\t";
        }
        for(j=1; j<=i; j++) {
            cout<<"*\t";
        }
        for(j=i-1; j>=1; j--) {
            cout<<"*\t";
        }
        cout<<"\n";
    }

    // lower triangle
    for(i=num; i>=1; i--) {
        for(k=num-i; k>=0; k--) {
            cout<<"\t";
        }
        for(j=1; j<=i-1; j++) {
            cout<<"*\t";
        }
        for(j=i-2; j>=1; j--) {
            cout<<"*\t";
        }
        cout<<"\n";
    }



    return 0;
}