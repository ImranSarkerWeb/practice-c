#include <stdio.h>

int main()
{
    char S[1000001];
    scanf("%s", S);
    int count = 0;
    int i = 0;
    while (S[i] != '\0')
    {
        count += S[i] - '0';
        /* here - '0' use because 0 =48, we need to minus 48 to get exact decimal value */
        i++;
    }
    printf("%d", count);
    return 0;
}