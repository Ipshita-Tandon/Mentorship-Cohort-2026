// Question 1: Print Z

#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    for (i=5; i>=1; i--) {

        // For rows 1 and 5
        if (i==1 or i==5) {
            for (j=1; j<=5; j++) {
                cout<<"*";
            }

        // For middle rows
        } else {
            for (k = i-1; k>=1; k--) {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

