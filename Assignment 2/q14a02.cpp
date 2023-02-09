#include <iostream>     // 10/10

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i;
    for(i=1; i<=10; i++) {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
