#include <iostream>     // 10/10

using namespace std;

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int num=1, i, j;
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++, num++) {
            printf("%d\t", num);
        }
        printf("\n");
    }
    return 0;
}

// apparantly printf also works in cpp!