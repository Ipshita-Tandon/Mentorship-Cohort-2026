#include <iostream>     // 10/10 - but sooo inefficient - reduce number of loops

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    int i, j, k, count=1;
    for(i=1; i<=n; i++) {
        if (i <= n/2) {
            for(k=n/2-1; k>=0; k--) {
                cout<<"\t";
            }
            for(j=1; j<=i; j++) {
                cout<<"*\t";
            }
        } else if (i == n/2+1) {
            while (count != n+1){
                cout<<"*\t";
                count++;
            } 

        } else {
            for(k=n/2-1; k>=0; k--) {
                cout<<"\t";
            }
            for(j=1; j<=n+1-i; j++) {
                cout<<"*\t";
            }
        }
            
        cout<<endl;
    }

    return 0;
}