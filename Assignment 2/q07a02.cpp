#include <iostream>     // 10/10

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    int i,k;
    for(i=1; i<=n; i++) {
        for(k=i-1-1; k>=0; k--) {
            cout<<"\t";
        }
        cout<<"*\t\n";
    }
    return 0;
}

