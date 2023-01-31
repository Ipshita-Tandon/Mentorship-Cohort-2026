#include <iostream>     // 10/10
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    int i,j;
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            cout<<"*\t";
        }
        cout<<"\n";
    }   
}