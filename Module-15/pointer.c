#include <stdio.h>

int main()
{

    int x = 500;
    double y = 100.2564;

    int *ptrX = &x;

    double *ptrY = &y;

    printf("The size of ptrX %d\n", sizeof(ptrX));

    printf("The size of ptrY %d\n", sizeof(ptrY));
    // printf("The size of ptrX %d\n", sizeof(ptrY));
    return 0;
}