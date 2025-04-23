#include <stdio.h>

int main()
{
    int array_size, i, j = 0, tmp, count = 0;

    scanf("%d", &array_size);

    int arr[array_size];

    for (i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    int k = array_size - 1;
    while (j < k)
    {
        /* code */
        if (arr[j] == arr[k])
        {
            /* code */
            count++;
        }

        j++;
        k--;
    }

    if (array_size / 2 == count)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}