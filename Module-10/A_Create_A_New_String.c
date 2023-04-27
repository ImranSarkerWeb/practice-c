#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001], T[1001];
    scanf("%s %s", S, T);
    int s_len = strlen(S);
    int t_len = strlen(T);
    printf("%d %d\n", s_len, t_len);
    printf("%s %s", S, T);
    return 0;
}