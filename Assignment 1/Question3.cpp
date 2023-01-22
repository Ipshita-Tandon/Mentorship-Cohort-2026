// Question 3: Is a number prime

#include <iostream> // 8/10 one testcase failed ??

using namespace std;

int main()
{
    int t, n, i, check=0;

    cout<<"Enter count of numbers to be tested: ";
    cin>>t;

    while (t > 0) {

        cout<<"Enter a number: ";
        cin>>n;
        check = 0;

        if (n<=1) {
            cout<<"Neither prime nor composite";
        } else if (n==2) {
            cout<<"Prime"<<endl;
        } else {
            for (i=2; i<=n/2; i++) {
                if (n%i == 0) {
                    cout<<"Composite"<<endl;
                    check = 1;
                    break;
                }
            }

            if (check == 0) {
                cout<<"Prime"<<endl;
            } 

        }

        t--;

    }

    return 0;
}