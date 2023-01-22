// Question 9: GCD and LCM

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, i, lower, upper;
    int gcd, lcm=1;

    cout<<"Enter the value of num1: ";
    cin>>num1;

    cout<<"Enter the value of num2: ";
    cin>>num2;

    // Finding Greater of 2 numbers
    if (num1<num2) {
        lower = num1;
        upper = num2;
    } else {
        lower = num2;
        upper = num1;
    }


    // Finding GCD
    for (i=1; i<=lower; i++) {
        if (num1%i == 0 && num2%i == 0) {
            gcd = i;
        }
    }

    // Finding LCM
    for (i=upper; i<=(num1*num2); i++) {

        if (i%num1 == 0 && i%num2 == 0) {
            lcm = i;
            break;
        }
    }

    cout<<"GCD: "<< gcd<<endl;
    cout<<"LCM: "<< lcm<<endl;

    return 0;
}

// CONCEPT
// Two whole numbers always have at least one common multiple. 
// For example, if you multiply them by each other, you will find a multiple of each of the numbers.