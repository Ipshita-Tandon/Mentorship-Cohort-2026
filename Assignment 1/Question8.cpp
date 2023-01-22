// Question 8: Rotate a number      // 5/10 - Time limit exceeded, 3/6 test cases failed ?

#include <iostream>
#include <cmath>

using namespace std;

// function declarations
int length();

// global variable declarations
int num, n, len;

int main()
{
    int temp2, i, ans=0;
    double k;

    i = length()-1;
    temp2 = num;

    k = pow(10.0,double(i));

    for (i; n>0; n--) {
        ans = (temp2%10)*k + (temp2/10);
        temp2 = ans;
    }

    cout<<"Rotated number: "<<ans;
    return 0;

}

int length()
{
    int temp;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Enter number of rotations: ";
    cin>>n;

    temp = num;

    while (temp != 0) {
        len += 1;
        temp = temp/10;
    }

    return len;
}



