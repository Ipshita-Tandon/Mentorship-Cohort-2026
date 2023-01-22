// Question 5: Count digits in a number

#include <iostream>

using namespace std;

int main()
{
    int n, temp, d=0;
    cout<<"Enter a number: ";
    cin>>n;

    temp = n;
    while (temp != 0) {
        d += 1;
        temp = temp/10;
    }
    cout<<d;

    return 0;
}