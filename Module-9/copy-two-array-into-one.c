#include <stdio.h>

int main()
{

    int m, n;
    scanf("%d %d", &m, &n);
    int arr_1[m];
    int arr_2[n];
    int copied_arr[m + n];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr_1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr_2[i]);
    }
    for (int i = 0; i < m; i++)
    {
        copied_arr[i] = arr_1[i];
    }

    int i = m;
    for (int j = 0; j < n; j++)
    {
        copied_arr[i] = arr_2[j];
        i++;
    }

    for (int i = 0; i < (m + n); i++)
    {
        printf(" %d", copied_arr[i]);
    }
    return 0;
}