// Question 2: Grading System

#include <iostream>

using namespace std;

int main()
{
    float marks;
    cout<<"Enter you marks: ";
    cin>>marks;

    if (marks>90) {
        cout<<"Excellent";
    } else if (marks>80) {
        cout<<"Good";
    } else if (marks>70) {
        cout<<"Fair";
    } else if (marks>60) {
        cout<<"Meets Expectations";
    } else if (marks>0) {
        cout<<"Below par";
    } else {
        cout<<"Invalid Input";
    }

    return 0;
}