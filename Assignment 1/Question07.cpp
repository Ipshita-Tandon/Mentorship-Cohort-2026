// Question 7: Inverse Of A Number

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, pos;
    cout<<"Enter a number: ";
    cin>>num;
    
    int ans=0, temp;
    temp = num;

    for (pos=1; temp; pos++) {
        // cout<<"temp: "<<temp<<endl;
        
        ans += pos*pow(10,(temp%10-1));
        temp = temp/10;
    }

    cout<<"Inverse of number: "<<ans;


    return 0;
}