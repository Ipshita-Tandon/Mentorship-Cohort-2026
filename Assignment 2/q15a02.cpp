#include <iostream>     // 10/10

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    int i,j,k, var;
    int num=n/2+1;

    // upper triangle
    for(i=1; i<=num; i++) {
        var = i;
        for(k=num-i-1; k>=0; k--) {
            cout<<"\t";
        }
        for(j=1; j<=i; j++) {
            cout<<var<<"\t";
            var ++;
        }

        var = var-2;
        for(j=i-1; j>=1; j--) {
            cout<<var<<"\t";
            var --;
        }
        cout<<"\n";
    }

    // lower triangle
    for(i=num; i>=1; i--) {
        var = i-1;
        for(k=num-i; k>=0; k--) {
            cout<<"\t";
        }
        for(j=1; j<=i-1; j++) {
            cout<<var<<"\t";
            var++;
        }
        var = var-2;
        for(j=i-2; j>=1; j--) {
            cout<<var<<"\t";
            var--;
        }
        cout<<"\n";
    }



    return 0;
}