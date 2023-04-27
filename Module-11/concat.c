#include <stdio.h>
#include <string.h>

int main()
{

    char a[100], b[100];
    scanf("%s %s", a, b);
    int i, k;
    k = strlen(a);
    for (i = 0; i < strlen(b); i++)
    {
        a[k] = b[i];
        k++;
    }
    printf("%s", a);
    return 0;
}