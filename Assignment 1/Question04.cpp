// Question 4: Print all primes till N      // 5/10 - Time limit exceeded, 3 testcases failed ?

#include <iostream>

using namespace std;

int main()
{
    int low, high, num, i, check;
    cout<<"Enter lower limit: ";
    cin>>low;

    cout<<"Enter upper limit: ";
    cin>>high;
    
    num=low;
    while (num <= high) {
        check = 0;

        for (i=2; i<=num/2 +1; i++) {
            if (num==2) {
                // Prime
                break;
            }
            if (num%i == 0) {
                // Composite
                check = 1;
                break;
            }
        }
        
        if (check == 0) {
            // Prime
            cout<<num<<endl;
        }
        num++;

    }

    return 0;
}