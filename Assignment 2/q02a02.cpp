#include <iostream>     // 10/10
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    int i,j;
    for(i=n; i>=1; i--) {
        for(j=i; j>=1; j--) {
            cout<<"*\t";
        }
        cout<<"\n";
    }   
}