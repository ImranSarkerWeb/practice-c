#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    fgets(ch, 100, stdin);
    /* fgets function takes enter as input, if we want to prevent it then we have to put null value in the last position of the string. like: ch[lastIndex] = '\0' */
    printf("%s", ch);
    return 0;
}