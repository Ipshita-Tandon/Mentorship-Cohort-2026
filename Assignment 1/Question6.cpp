// Question 6: Reverse a number

#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    cout<<"Enter a number: ";
    cin>>n;

    temp = n;
    while (temp != 0) {
        cout<<temp%10<<endl;
        temp = temp/10;
    }

    return 0;
}

