// Question 10: Prime factorization of a number

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // 2s dividing n
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }

    // Odd Prime factors
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
 
    // if n itself is prime
    if (n > 2)
        cout << n << " ";

    return 0;
}


